#!/bin/bash
curl -s --output /tmp/fakeio.so https://raw.githubusercontent.com/99yh/alx-low_level_programming/main/0x18-dynamic_libraries/fakeio.so
export LD_PRELOAD=/tmp/fakeio.so
