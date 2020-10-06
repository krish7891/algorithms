import sys

def binary_search(arr, lt, rt, x ):

    while (lt < rt) :
        mid = lt + (rt - lt) // 2 ;
        if (arr[mid] == x) :
            return mid

        if (x < mid):
            rt = mid - 1;
        else:
            lt = mid + 1;

    return -1

#main code

arr = [2,4,6,8,10]
x = 6

index = binary_search(arr, 0, len(arr), x)

if (index == -1):
    print "Element not found"
else:
    print "Element found at index : " + str(index)

