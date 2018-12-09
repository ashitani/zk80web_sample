#!/usr/bin/env python
#coding: utf-8

# insert start address to the header of the target binary file
#
# Usage:  python insert_addr.py [filename] [start_address]
# Sample: python insert_addr.py hello.bin 0x8000

import sys

argv=sys.argv

if len(argv)!=3:
    printf("Usage: python insert_addr.py [filename] [start_address]")

filename=argv[1]
adr=eval(argv[2])

with open(filename, "rb") as f:
    d=f.read()

with open(filename, "wb") as f:
    f.write(adr.to_bytes(2,byteorder="little"))
    f.write(d)
