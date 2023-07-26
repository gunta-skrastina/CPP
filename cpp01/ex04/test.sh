#!/bin/bash

set -x
set -o pipefail

make

./better_than_sed

./better_than_sed test.txt " is" " isn't"

touch test.txt
echo "this is test" > test.txt
./better_than_sed test.txt " is" " isn't"

touch test2.txt
echo "Why do programmers prefer dark mode?
Because light attracts bugs!" > test2.txt
./better_than_sed test2.txt "Because light attracts bugs!" "Because they want to code like Batman!"