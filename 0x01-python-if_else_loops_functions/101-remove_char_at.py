#!/usr/bin/python3
def remove_char_at(str, n):
    new = ''
    i = 0
    for char in str:
        if i != n:
            new += str[i]
        i += 1
    return (new)
         
