#!/bin/bash
i=0
until ((i >= 5 ));
do
echo "number $i"
let "i++"
done
