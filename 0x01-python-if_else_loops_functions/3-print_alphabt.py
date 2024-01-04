#!/usr/bin/python3
for i in range(97, 123):
    if i in range(101, 113):
        continue
    print("{}".format(chr(i)), end='')
