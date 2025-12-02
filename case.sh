#!/bin/bash

ANIMAL="dog"
case "$ANIMAL" in 
"horse" | "dog" | "cat")
LEGS="4"
;;
"human"|"chicken")
LEGS="2"
;;
*)
LEGS="?"
;;
esac
echo "$ANIMAL has $LEGS legs."
