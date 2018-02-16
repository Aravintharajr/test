#!/usr/bin/python
#Odd or Even

number=int(input("Enter a Number to Check Odd Or Even:"))
if number%2:
    print "Odd Number"
elif (number%4)==0:
    print "Number is divisible by 4"
else:
    print "Even Number"
