import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n, m = map(int, input().split())
	house = list(map(int, input().split()))

	hlist = set()
	for i in range(1, m + 1):
		s, e = map(int, input().split())
		for j in range(s - 1, e):
			house[j] += 1
			hlist.add(j)

		if i % 3 == 0:
			for k in hlist:
				house[k] -= 1

			hlist.clear()

	print(*house)
	
if __name__ == "__main__":
	solve()