import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())
	if not n: return

	nlist = [40, 20, 10, 5, 1]

	count = 0
	for i in nlist:
		count += n // i
		n %= i

	write(str(count) + "\n")

if __name__ == "__main__":
	solve()
