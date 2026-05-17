import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())

	A = list(map(int, input().split()))
	B = list(map(int, input().split()))

	count = int(input().rstrip())

	for i in range(n - 1, -1, -1):
		temp = (B[i] + count) // (A[i] + 1)
		B[i] = (B[i] + count) % (A[i] + 1)

		count = temp

	for i in B:
		write(str(i))
	write("\n")

if __name__ == "__main__":
	solve()