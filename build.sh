#!/bin/bash
#if [ ! -f ./ostream.hpp ]; then
#	clang -stdlib=libc++ -E ostream.cpp >ostream.hpp
#fi
DIR="$(
	cd -- "$(dirname "$0")" >/dev/null 2>&1
	pwd -P
)"
clang++ -stdlib=libc++ -std=c++20 -xc++-user-header --precompile $DIR/a.hpp -o a.pcm
clang++ -stdlib=libc++ -std=c++20 -xc++-user-header --precompile $DIR/b.hpp -o b.pcm
clang++ -stdlib=libc++ -std=c++20 -fmodule-file=a.pcm -fmodule-file=b.pcm $DIR/main.cpp -c 2>&1 | grep "'std::basic_ios<char>::basic_ios'.*is not present in definition of"
