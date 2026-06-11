import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	x, y = map(int, input().split())

	if (x * y) % 2 == 0:
		write("E\n")
	else:
		write("O\n")

if __name__ == "__main__":
	solve()
