#!/bin/sh

where_am_i=$(ifconfig | grep broadcast | cut -d ' ' -f 2)
if [ '$where_i_am' = '' ]
then
	echo "I am lost!"
else
	echo $where_am_i
fi
