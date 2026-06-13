import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	a, b = map(int, input().split())

	write(str(min(a, b)) + "\n")
	
if __name__ == "__main__":
	solve()
