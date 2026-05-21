import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())
	nlist = list(map(int, input().split()))

	nlist.sort()

	answer = 0
	for i in range(n // 2):
		answer += nlist[i] + nlist[n - 1 - i]

	write(str(answer) + "\n")

if __name__ == "__main__":
	solve()