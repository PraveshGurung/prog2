#!/bin/sh
# Originally from:
# https://github.com/blankpage/e5UNIXBuilder/blob/master/build-akili.sh

# Linux and similar...
CPUS=$(getconf _NPROCESSORS_ONLN 2>/dev/null)
# FreeBSD and similar...
[ -z "$CPUS" ] && CPUS=$(getconf NPROCESSORS_ONLN)
# Solaris and similar...
[ -z "$CPUS" ] && CPUS=$(ksh93 -c 'getconf NPROCESSORS_ONLN')
# Give up...
[ -z "$CPUS" ] && CPUS=1
