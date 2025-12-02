#!/bin/bash 
function make_a_pizza()
{
dough="$1"
source_type="$2"
pizza_type="$3"

echo "make a $dough $pizza_type pizza with $source_type source..."
base_tops="ham,cheese,meat,veges"
if [ "$pizza_type" == "potato" ]; then
special_top="potato"
elif [ "pizza_type" == "hawaiian" ]; then
special_top="pineapple"
elif [ "$pizza_top" == "avocado" ]; then
special_top="avocado"
fi
echo "-flatten the $dough dough"
echo "-spread the $source_type source"
echo "-top with $base_top and $special_top"
echo "-flatten the $dough dough"
}
echo "1"
make_a_pizza "thick" "tomato" "potato"
echo "2"
make_a_pizza "thick" "tomato" "hawaiian"
echo "3"
make_a_pizza "thin" "spicy" "avocado"

