import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())

	for _ in range(n):
		x, y, sec = map(int, input().split())

		if x < 0: x = -x
		if y < 0: y = -y

		if (x + y) <= sec and (sec - (x + y)) % 2 == 0:
			write("YES\n")
		else:
			write("NO\n")

if __name__ == "__main__":
	solve()