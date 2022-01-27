#!/bin/bash
pushd kaitai-generated || exit
kaitai-struct-compiler -t cpp_stl ../kaitai/qcow2.yml
popd