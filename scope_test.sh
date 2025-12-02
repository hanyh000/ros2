#!/bin/bash

declared_main="beautiful"
function scope_test_func()
{
declared_in_func="hello"
local func_local_var="world"
echo "from inside of function"
echo "-declared_in_func=>$declared_in_func"
echo "-func_local_var=>$func_local_var"
echo "-declared_main => $declared_main"
echo ""
}

scope_test_func
echo "from inside of function"
echo "-declared_in_func=>$declared_in_func"
echo "-func_local_var=>$func_local_var"
echo "-declared_main => $declared_main"
