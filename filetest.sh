#!/bin/bash
FILE="string.sh"
echo "target file is $FILE"
if [ -f "$FILE" ]; then
echo "-f operator : True"
else
echo "-f operator: False"
fi

if [ -r "$FILE" ]; then
echo "-r operator : True"
else
echo "-r operator: False"
fi


if [ -d "$FILE" ]; then
echo "-d operator : True"
else
echo "-d operator: False"
fi

if [ -s "$FILE" ]; then
echo "-s operator : True"
else
echo "-s operator: False"
fi

FILE="/etc/passwd"
echo "target file is $FILE"

if [ -r "$FILE" ]; then
echo "-r operator : True"
else
echo "-r operator: False"
fi

if [ -w "$FILE" ]; then
echo "-w operator : True"
else
echo "-w operator: False"
fi

if [ -x "$FILE" ]; then
echo "-x operator : True"
else
echo "-x operator: False"
fi
