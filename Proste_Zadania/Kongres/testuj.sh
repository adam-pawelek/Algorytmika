#!/bin/bash

a=10
b=20
echo "$a";
for i in {1..10}; do
        Diff=$(diff wynn"$i" wynik"$i" )	
	echo "$i";
	if [ "$b" -eq "$a" ];then
		echo 1;
	fi
	
	if [ "$Diff" != "" ];then
		echo 1;
	fi
	diff wynn"$i" wynik"$i";
done
