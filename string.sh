#!/bin/bash
A="hello"
B="world"

if [ "$A" == "$B" ]; then
	echo "== operator : True"
else
	echo "== operator: False"
fi

if [ "$A" != "$B" ]; then
echo "!= operator : True"
else
echo "!= operator: False"
fi

if [ "$A" \> "$B" ]; then
echo "\> operator : True"
else
echo "\> operator: False"
fi

if [ -n "$A" ]; then
echo "-n operator : True"
else
echo "-n operator: False"
fi

if [ -z "$A" ]; then
echo "-z operator : True"
else
echo "-z operator: False"
fi
