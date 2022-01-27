#!/bin/bash
emcc main.cpp qcow2.c -s WASM=1 -O3 --bind -o vmiutil.js