import sys

MOD = 1000000007

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	k = int(input().rstrip())
	if not k: return

	if k == 1:
		write("0\n")
		return
	elif k == 2:
		write("1\n")
		return

	prev2 = 0
	prev1 = 1
	current = 0
	for i in range(3, k + 1):
		current = (prev2 + prev1) % MOD
		prev2 = prev1
		prev1 = current

	write(str(current) + "\n")

if __name__ == "__main__":
	solve()