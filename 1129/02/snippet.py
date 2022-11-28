import sys

s1 = input()
s2 = input()

list1 = []
list2 = []

for i in range(0, 60 * 24):
    hour = int(i // 60)
    minute = int(i % 60)

    if s1[0] == '?' or int(s1[0]) == hour // 10:
        if s1[1] == '?' or int(s1[1]) == hour % 10:
            if s1[3] == '?' or int(s1[3]) == minute // 10:
                if s1[4] == '?' or int(s1[4]) == minute % 10:
                    list1.append(i)

    if s2[0] == '?' or int(s2[0]) == hour // 10:
        if s2[1] == '?' or int(s2[1]) == hour % 10:
            if s2[3] == '?' or int(s2[3]) == minute // 10:
                if s2[4] == '?' or int(s2[4]) == minute % 10:
                    list2.append(i)

mintime = 60*24
maxtime = 0
for i in range(len(list1)):
    for j in range(len(list2)):
        if list1[i] < list2[j]:
            mintime = min(mintime, list2[j] - list1[i])
            maxtime = max(maxtime, list2[j] - list1[i])

print(mintime, maxtime)