import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	j, n = map(int, input().split())

	nlist = []
	for _ in range(n):
		a, b = map(int, input().split())

		nlist.append(a * b)
	nlist.sort(reverse=True)

	answer = 0
	for i in nlist:
		j -= i
		answer += 1

		if j <= 0:
			break

	if j <= 0:
		write(str(answer) + "\n")
	else:
		write('-1\n')

if __name__ == "__main__":
	solve()
