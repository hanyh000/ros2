#!/bin/bash
A="34"
B="56"
echo "A=$A, B=$B"

if [ "$A" \< "$B" ]; then
echo "< operator : True"
else
echo "< operator: False"
fi

A="112"
B="11111"
echo "A=$A, B=$B"

if [ "$A" \< "$B" ]; then
echo "< operator : True"
else
echo "< operator: False"
fi
