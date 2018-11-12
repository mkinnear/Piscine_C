ldapsearch -XLLL uid="*bon*" | grep "^cn:" | wc -l | cut -c7-
