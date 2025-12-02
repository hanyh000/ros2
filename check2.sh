#!/bin/bash

MENUA="a"
MENUB="c"

for ((i = 0; i < 10; i++))
do
	case "MENUA" in
		"d" | "a")
			PRICE="4000"
			;;
		"v" | "c")
			PRICE="5000"
			;;
		*)
			PRICE="0"
			;;
	esac

	TOTAL=$(expr $PRICE * $i)
	echo ${TOTAL}원
done
