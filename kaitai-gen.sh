#!/bin/bash
pushd kaitai || exit
ksc -t cpp_stl qcow2.yml
popd