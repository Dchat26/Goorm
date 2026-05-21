import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())
	
	nlist = [[0] * (2 * n + 1) for _ in range(2 * n + 1)]
	nlist[n][n] = 1

	d = input().rstrip()
	s = list(map(int, input().split()))

	temp = [(n, n)]
	x, y = n, n

	moves = {'L' : (-1, 0), 'R' : (1, 0), 'U' : (0, 1), 'D' : (0, -1)}
	
	for c, score in zip(d, s):
		nx = x + moves[c][0]
		ny = y + moves[c][1]

		if nlist[nx][ny] == 0:
			temp.append((nx, ny))
			nlist[nx][ny] = score
			x, y = nx, ny
		else:
			while True:
				ax, ay = temp.pop()

				if ax == nx and ay == ny:
					nlist[ax][ay] = score
					temp.append((ax, ay))
					x, y = ax, ay
					break
				else:
					nlist[ax][ay] = 0

	total = sum(sum(row) for row in nlist)
	write(str(total) + "\n")
	
if __name__ == "__main__":
	solve()