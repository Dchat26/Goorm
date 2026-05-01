from collections import deque

queue = deque()

n, k = map(int, input().split())

for _ in range(n):
	line = input().split()
	
	if line[0] == "push":
		if len(queue) == k:
			print("Overflow")
		else:
			queue.append(line[1])
	else:
		if len(queue) == 0:
			print("Underflow")
		else:
			print(queue.popleft())