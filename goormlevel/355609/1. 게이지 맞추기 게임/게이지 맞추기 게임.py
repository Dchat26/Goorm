import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	d, l, r = map(int, input().split())

	target = 0
	while (target < l):
		target += d

	if target >= l and target <= r:
		write("Y\n")
	else:
		write("N\n")
	
if __name__ == "__main__":
	solve()
