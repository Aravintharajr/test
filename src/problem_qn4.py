#!/usr/bin/python

#Divisor

div_list=[]
number=int(input("Enter a number to find the divisor:"))

for i in range(2,number/2):
    if((number % i) == 0):
        div_list.append(i)

print "Total Nuber of Divisors of Number %d is %d\nListed as:" %(number,len(div_list)) + str(div_list)

if(len(div_list) == 0):
    print "No divisors %d is Prime" %(number)

del div_list
del number
