#!/usr/bin/python

name="malaysalam"
length=len(name) - 1

for i in range(0,len(name)/2):
    if(name[i] == name[length]):
        print name[i]
        print name[length]
        length-=1
        continue
    else:
        break

if i == length:
    print "Palindrome"
