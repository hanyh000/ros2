#!/bin/bash
file="/etc/passwd"
while read -r line
do
echo "read line: $line"
done < "$file"
