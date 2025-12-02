#!/bin/bash
echo "number of params: $#"
echo "\$* is '$*'"
for param in "$*"
do
echo "-parameter '$param'"
done
echo "\$@ is '$@'"
for param in "$@"
do 
echo "-parameter '$param'"
done
