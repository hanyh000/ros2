#!/bin/bash 
function magic_box()
{
input="$1"
let "result = input + 8"
echo "$input +8 = $result"
return $result
}
progress=$(magic_box "7")
result="$?"
echo "progress: $progress"
echo "result is $result"
