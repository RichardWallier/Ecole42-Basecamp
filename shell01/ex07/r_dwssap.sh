cat /etc/passwd | cut -d ":" -f 1 | sed -n "&FT_LINE1, &FT_LINE2 p" | rev | sort -r | tr '\n' ', ' | tr ',' '.'
