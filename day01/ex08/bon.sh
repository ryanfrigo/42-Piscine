#!/bin/sh
ldapsearch -Q '(sn=*bon*)' | grep sn: | wc -l | cut -b 8