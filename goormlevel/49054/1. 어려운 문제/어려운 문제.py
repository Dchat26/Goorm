import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())

	answer = 1
	for i in range(1, n + 1):
		answer *= i

		while answer >= 10:
			temp = 0
			while answer > 0:
				temp += answer % 10
				answer //= 10
			answer = temp

	write(str(answer) + "\n")

if __name__ == "__main__":
	solve()