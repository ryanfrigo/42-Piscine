#!/bin/sh
ifconfig | grep '..:..:' | tr 'ether' ' ' | tr -d '[:blank:]'
