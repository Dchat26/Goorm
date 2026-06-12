import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	t = int(input().rstrip())
	
	write(str(t * t) + "\n")
	
if __name__ == "__main__":
	solve()
