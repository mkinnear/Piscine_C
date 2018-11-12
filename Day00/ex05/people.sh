#!/bin/sh
ldapsearch -Q -LLL "uid=z*" cn | grep cn | sed 's/cn: //' | sort -r -f
