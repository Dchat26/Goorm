import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve() :
	n = int(input().rstrip())
	if not n : return

		nlist = [list(map(int, input().split())) for _ in range(n)]
		nlist.sort(key = lambda x : (x[1], x[0]))

		answer = 0
		target = -1
		for i in nlist :
if target <= i[0] :
	answer += 1
	target = i[1] + 1

	write(str(answer) + "\n")

	if __name__ == "__main__":
solve()