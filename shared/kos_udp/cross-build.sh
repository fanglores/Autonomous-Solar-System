#!/bin/bash

BUILD=$PWD/build
mkdir -p $BUILD && cd $BUILD

export LANG=C
export TARGET="arm-kos"
export PKG_CONFIG=""
export SDK_PREFIX="/opt/KasperskyOS-Community-Edition-1.0.1.4"
export PATH="$SDK_PREFIX/toolchain/bin:$PATH"

BUILD_HOST=$BUILD/host
mkdir -p host 

cd $BUILD_HOST && cmake -G "Unix Makefiles" \
    -D CMAKE_BUILD_TYPE:STRING=Debug \
    -D CMAKE_INSTALL_PREFIX:STRING=$BUILD/../install \
    ../../ && make server || exit 1

$BUILD_HOST/server/server &
server_pid=$!
trap "kill $server_pid" 0 1 2 3 13 15

cd $BUILD && cmake -G "Unix Makefiles" \
      -D CMAKE_BUILD_TYPE:STRING=Debug \
      -D CMAKE_INSTALL_PREFIX:STRING=$BUILD/../install \
      -D CMAKE_TOOLCHAIN_FILE=$SDK_PREFIX/toolchain/share/toolchain-arm-kos.cmake \
      ../ && make sim
