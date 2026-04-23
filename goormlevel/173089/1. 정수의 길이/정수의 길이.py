import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve() :
	write(str(len(input().rstrip())) + "\n")

	if __name__ == "__main__" :
		solve()