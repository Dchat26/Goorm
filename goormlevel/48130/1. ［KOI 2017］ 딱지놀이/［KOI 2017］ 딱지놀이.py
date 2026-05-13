import sys
from collections import Counter

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())

	result = []
	for _ in range(n):
		a = Counter(list(map(int, input().split()))[1:])
		b = Counter(list(map(int, input().split()))[1:])

		is_TF = 1
		for i in range(4, 0, -1):
			if a[i] > b[i]:
				is_TF = 0
				result.append('A')
				break
			elif a[i] < b[i]:
				is_TF = 0
				result.append('B')
				break

		if is_TF:
			result.append('D')

	write("\n".join(result) + "\n")

if __name__ == "__main__":
	solve()