import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())
	nlist = [list(map(int, input().split())) for _ in range(n)]

	dh = [1, 0, 0, -1]
	dw = [0, 1, -1, 0]

	ice = []
	for i in range(n):
		for j in range(n):
			if nlist[i][j] > 0:
				ice.append((i, j))

	answer = 0
	while ice:
		next_ice = []
		melt_info = []

		for i, j in ice:
			count = 0
			for k in range(4):
				row = i + dh[k]
				col = j + dw[k]
				
				if (row >= 0 and row < n) and (col >= 0 and col < n) and (nlist[row][col] == 0):
					count += 1

			if nlist[i][j] - count > 0:
				next_ice.append((i, j))
				melt_info.append((i, j, nlist[i][j] - count))
			else:
				melt_info.append((i, j, 0))

		for i, j, val in melt_info:
			nlist[i][j] = val

		ice = next_ice
		answer += 1

	write(str(answer) + "\n")

if __name__ == "__main__":
	solve()