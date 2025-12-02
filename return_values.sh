#!/bin/bash
function is_file_exist()
{
filename="$1"
ls | grep -q $filename
return $?
}
is_file_exist "sh"
echo "file exist test: $?"
is_file_exist "non-exist-file-pattern:"
echo "file exist test: $?"
