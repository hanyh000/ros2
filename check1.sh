#!/bin/bash
COURSE1="Korean"
SCORE1="90"
COURSE2="English"
SCORE2="80"
COURSE3="Math"
SCORE3="99"

if [ "$SCORE1" -lt "$SCORE2" -a "$SCORE1" -lt "$SCORE3" ]; then
	RESULT="most less"
	echo "$COURSE1 is $RESULT"
else
	echo " "
fi

if [ "$SCORE2" -lt "$SCORE1" -a "$SCORE2" -lt "$SCORE3" ]; then
	RESULT="most less"
	echo "$COURSE2 is $RESULT"
else
	echo " "
fi

if [ "$SCORE3" -lt "$SCORE1" -a "$SCORE3" -lt "$SCORE2" ]; then
	RESULT="most less"
	echo "$COURSE3 is $RESULT"
else
	echo " "
fi
