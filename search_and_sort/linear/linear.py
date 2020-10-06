#python code for liner search

import random
import sys

def linear_search(arr, count, x):

    for i in range(0, count):
        if (arr[i] == x):
            return i;
    return (-1);


#driver code
arr = []
check = int(sys.argv[1])
print ("Command line argument is : ", check)

for i in range(37):
    arr.append(random.randint(0, 37))
    print arr[i]

index = linear_search(arr, 37, check)
if(index == -1):
    print "Element is not present"
else:
    print ("Element present at index : ", index)
