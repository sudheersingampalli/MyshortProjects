#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumNumber function below.
def minimumNumber(n, password):
    # Return the minimum number of characters to make the password strong
    count = 0
    flag = 0
    numbers = '0123456789'
    lower_case = 'abcdefghijklmnopqrstuvwxyz'
    upper_case = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    special_characters = '!@#$%^&*()-+'

    # check numbers 
    for c in numbers:
        if c in password:
            flag = 1
            break
    if flag != 1:
        count += 1
    flag = 0

    # check lower
    for c in lower_case:
        if c in password:
            flag = 1
            break
    if flag != 1:
        count += 1
    flag = 0

    # check upper
    for c in upper_case:
        if c in password:
            flag = 1
            break
    if flag != 1:
        count += 1
    flag = 0
            
    # check special
    for c in special_characters:
        if c in password:
            flag = 1
            break
    if flag != 1:
        count += 1
    
    diff = 6 - (n + count) #3 1 => diff = 2   Ab1 4
    if diff < 6 :
        while (diff > 0): 
            count += 1
            diff -= 1
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    password = input()
    answer = minimumNumber(n, password)
    fptr.write(str(answer) + '\n')
    fptr.close()
