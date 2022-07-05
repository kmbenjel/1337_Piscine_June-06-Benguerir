#!/bin/sh
cat /etc/passwd | sed '/^#/d' | egrep -o '^(_?\w+)' | awk 'NR % 2 == 0' | rev | sort -r | awk -v ft_line1=$FT_LINE1 -v ft_line2=$FT_LINE2 'NR >= ft_line1 && NR <= ft_line2' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
