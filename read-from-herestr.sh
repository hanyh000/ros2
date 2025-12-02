#!/bin/bash
while read -r line
do
echo "read line: $line"
done << EOF
hello world.
this is form here docs.
byebye.
EOF
