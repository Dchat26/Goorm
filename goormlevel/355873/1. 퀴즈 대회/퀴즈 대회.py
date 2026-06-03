import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())
	nlist = list(map(int, input().split()))

	answer = 0
	score = 0
	for i in nlist:
		if i == 1:
			answer += 1 + score
			score += 1
		else:
			score = 0

	write(str(answer) + "\n")

if __name__ == "__main__":
	solve()