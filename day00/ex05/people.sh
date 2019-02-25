#!/bin/sh
ldapsearch "(uid=z*)" | grep "cn:" | sort --ignore-case -r | cut -c5-