import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	x, y = map(int, input().split())

	if x == 0 or y == 0:
		write("0\n")
	elif x > 0 and y > 0:
		write("1\n")
	elif x < 0 and y > 0:
		write("2\n")
	elif x < 0 and y < 0:
		write("3\n")
	else:
		write("4\n")
	
if __name__ == "__main__":
	solve()
