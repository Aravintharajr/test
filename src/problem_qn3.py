#!/usr/bin/python

numlist=[1,1,3,4,5,6,7,12,34,56]
newlist=[]
for i in numlist:
    if(i <= 5):
        print "val:" + str(i)
        newlist.append(i)
