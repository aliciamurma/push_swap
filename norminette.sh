#!/bin/bash

success=true
while read line; do
	if [[ ${line} == *"Error"* ]]; then
		success=false
	fi
done < /dev/stdin

if [[ ${success} == true ]]; then
	echo "\x1b[32mNORMINETTE OK!"
else
	echo "\x1b[31mNORMINETTE KO!"
fi