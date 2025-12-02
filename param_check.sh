#!/bin/bash
if [ $# -ne 2 ]; then
echo "usage: $0 NAME AGE"
exit 1
fi
name="$1"
age="$2"
echo "MESSAGE FORAM $0: hello $name, you are $age years old"
