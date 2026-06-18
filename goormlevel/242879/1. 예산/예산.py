import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n, m = map(int, input().split())

	for _ in range(n):
		a, b = map(int, input().split())
		m -= a * b

	if m < 0:
		write("No\n")
	else:
		write(str(m) + "\n")

if __name__ == "__main__":
	solve()
