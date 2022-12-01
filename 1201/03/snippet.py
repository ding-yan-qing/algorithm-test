import sys

n,k = map(int, input().split())
lis = list(map(int,input().split()))
list.sort(lis)
left = 0
right = 0
max1 = 0
sub = 0
while(right<len(lis)):
    sub = lis[right]-lis[left]
    while(sub>k):
        left += 1
        break
    if(max1<right-left+1 or max1==0):
        max1 = right-left+1
    right += 1
print(max1)