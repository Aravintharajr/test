#!/usr/bin/python

list_a = [1,1,2,3,5,8,13,21,34,55,89,1,13]
list_b = [1,2,3,4,5,6,7,8,9,10,11,12,13,1]

combined_list = []

for item in list_b:
    if item in list_a and item not in combined_list:
        combined_list.append(item)

print combined_list
