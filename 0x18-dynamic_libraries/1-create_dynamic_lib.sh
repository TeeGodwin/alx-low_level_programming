#!/bin/bash

for file in *.c; do
gcc -fPIC -c "$file"
