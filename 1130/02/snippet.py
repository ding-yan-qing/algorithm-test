import sys

def fast_add(a,b,p):
    res = 0
    while b>0:
        if b % 2 == 1:
            res = (res + a)%p
        b = b//2
        a=(a+a)%p
    return res%p

q = int(input())
for i in range(q):
    s= input()
    splt = s.split()
    a = int(splt[0])
    b=int(splt[1])
    p=int(splt[2])
    ans=fast_add(a,b,p)
    print(ans)
