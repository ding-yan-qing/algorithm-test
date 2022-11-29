import sys

def fast_power(base, power, p):
    res = 1
    while power >0:
        if power % 2 ==1:
            res = res*base%p
        power = power//2
        base = base*base%p
    return res%p
q = int(input())

for i in range(q):
    s = input()
    splt = s.split()
    a = int(splt[0])
    b = int(splt[1])
    p = int(splt[2])
    ans = fast_power(a,b,p)
    print(ans)

