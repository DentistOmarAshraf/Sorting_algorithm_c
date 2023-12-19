#!/usr/bin/python3

def bin_search(ls, item):
    low = 0
    high = len(ls) - 1

    while low <= high:
        mid = int((low + high) / 2)
        gus = ls[mid]
        
        if gus == item:
            return mid
        if gus < item:
            low = mid + 1
        else:
            high = mid - 1
        
    return None


ls = []
for i in range(1, 100):
    ls.append(i)
print(bin_search(ls, 1))

