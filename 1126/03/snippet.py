import sys
from collections import defaultdict
import heapq

input = sys.stdin.readline
n, m = map(int, input().split())
neighbors = defaultdict(list)
for _ in range(m):
    u, v, w = map(int, input().split())
    neighbors[u].append((v, w))
    neighbors[v].append((u, w))

pq = []
heapq.heappush(pq, (0, 1))
visited = [0]*5001
while len(pq):
    currentDistance, currentV = heapq.heappop(pq)
    visited[currentV] = 1

    if currentV == n:
        print(currentDistance)
        break
    for v, weight in neighbors[currentV]:
        if visited[v] == 0:
            heapq.heappush(pq, (currentDistance + weight, v))

else:
    print(-1)
