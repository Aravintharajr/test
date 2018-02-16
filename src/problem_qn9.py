#!/usr/bin/python
import random

num=random.randint(1,9)
while 1:
    val= int(input("Enter a value between 1 to 9:"))
    if num==val:
        print "Guessed correctly"
        break
    elif num < val:
        print "High"
    elif num > val:
        print "Low"
