n = int(input())

answer = 0
maxval = 0
weight = 0
for i in range(1, n + 1):
	w, v = map(int, input().split())

	m = w / v

	if maxval < m:
		maxval = m
		answer = i
		weight = w
	elif maxval == m:
		if weight < w:
			weight = w
			answer = i

print(answer)