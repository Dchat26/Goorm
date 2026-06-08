import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())

	a = int(n // 2)
	b = n - a

	write(str(a * b) + "\n")

if __name__ == "__main__":
	solve()
