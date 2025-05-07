#!/bin/bash
DIR="$(
  cd -- "$(dirname "$0")" >/dev/null 2>&1
  pwd -P
)"

clang++ -stdlib=libc++ -std=c++20 $DIR/a.hpp -Xclang -emit-pch -o a.hpp.pch
cp a.hpp.pch b.hpp.pch
clang++ -Xclang -include-pch -Xclang a.hpp.pch -stdlib=libc++ -std=c++20 --precompile $DIR/some.cppm -o some.pcm
clang++ -Xclang -include-pch -Xclang b.hpp.pch -stdlib=libc++ -std=c++20 -fmodule-file=some=some.pcm -c $DIR/main.cpp -o main.o
