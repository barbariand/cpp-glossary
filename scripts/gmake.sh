#!/bin/bash

if [ -z "$CONFIG" ]; then
  CONFIG="Debug"
fi

premake5 --dc=ldc --cc=clang gmake
make config=${CONFIG,,} $@
