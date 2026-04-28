n = int(input())

for i in range(1, n * n + 1):
	print(i, end="\n" if i % n == 0 else " ")