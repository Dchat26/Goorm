n = int(input())
nlist = [list(map(int, input().split())) for _ in range(n)]
row = [sum(row) for row in nlist]
col = [sum(col) for col in zip(*nlist)]

answer = 0
for i in range(n):
	for j in range(n):
		if nlist[i][j] == 0:
				answer += row[i] + col[j]

print(answer)