import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	r, c = map(int, input().split())

	rclist = [list(input().rstrip()) for _ in range(r)]

	row = [1, 0, 0, -1]
	col = [0, 1, -1, 0]

	mv = []
	for i in range(r):
		for j in range(c):
			if rclist[i][j] == '@':
				mv.append((i, j))

	count = 0
	while mv:
		next_mv = []

		for a, b in mv:
			for i in range(4):
				dw = a + row[i]
				dh = b + col[i]

				if 0 <= dw < r and 0 <= dh < c:
					if rclist[dw][dh] == '&':
						write(str(count) + "\n")
						return
					elif rclist[dw][dh] == '.':
						rclist[dw][dh] = '@'
						next_mv.append((dw, dh))

		mv = next_mv
		count += 1

	write("-1\n")
		
if __name__ == "__main__":
	solve()