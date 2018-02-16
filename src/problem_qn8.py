#!/usr/bin/python

user1=input("User1,Please Enter Your Name:")
user2=input("User2,Please Enter Your Name:")

input1=int(input("Please Enter 1.Rock 2.Scissor 3.Paper"))
input2=int(input("Please Enter 1.Rock 2.Scissor 3.Paper"))

diff=input1-input2

if diff in [-1,2]:
    print "%s wins" % user1
elif diff in [-2,1]:
    print "%s wins" % user2
else:
    print "Match Draw"
