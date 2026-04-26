import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	line = input().split()
	if not line: return

	a, b = map(int, line)
	alist = set()

	for i in range(1, b + 1):
		alist.add(input().rstrip())
		
		if len(alist) == a:
			write(str(i) + "\n")
			return
			
	write("-1\n")

if __name__ == "__main__":
	solve()