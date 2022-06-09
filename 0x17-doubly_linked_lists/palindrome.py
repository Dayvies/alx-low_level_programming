#!/usr/bin/python3
x = 0
palin = []

for i in range(1, 1000):
    for j in range(1, 1000):
        palinc = True
        a = j * i
        arr = [int(n) for n in str(a)]
        arrlen = len(arr)
        ind = arrlen - 1
        for z in range(int(arrlen/2) + 1):
            if arr[z] != arr[ind]:
                palinc = False
                break
            ind += -1
        if palinc == True:
            palin.append(a)
print(palin[-20:])
print(max(palin))
