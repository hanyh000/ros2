#!/bin/bash
function print_num_params()
{
echo "number of input param : $#"
}
print_num_params
print_num_params abc
print_num_params abc zxy
print_num_params abc zxy 123
print_num_params "abc zxy" 123
print_num_params "abc zxy 123"

