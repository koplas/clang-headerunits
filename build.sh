#!/bin/bash
if [ ! -f ./ostream.hpp ]; then
	clang -stdlib=libc++ -E ostream.cpp >ostream.hpp
fi
clang++ -stdlib=libc++ -std=c++20 -xc++-user-header --precompile ./a.hpp -o a.pcm
clang++ -stdlib=libc++ -std=c++20 -xc++-user-header --precompile ./b.hpp -o b.pcm
clang++ -stdlib=libc++ -std=c++20 -fmodule-file=a.pcm -fmodule-file=b.pcm -c main.cpp
