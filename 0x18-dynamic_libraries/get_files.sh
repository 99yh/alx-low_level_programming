#!/bin/bash
files=(_putchar islower isalpha abs isupper isdigit strlen puts strcpy atoi strcat strncat strncpy strcmp memset memcpy strchr strspn strpbrk strstr)
mkdir pkg
for file in "${files[@]}"; do
	filepath=($(find ../ -name *${file}.c))
	if [[ "$filepath" ]]; then
		cp ${filepath[0]} ./pkg/
	else
		grepstr=$(grep ${file} ./main.h)
		echo ${grepstr/;/{}} > ./pkg/empty_${file}.c
	fi
done
