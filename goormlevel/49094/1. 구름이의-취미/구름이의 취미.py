import sys

input = sys.stdin.readline
write = sys.stdout.write

MOD = 1000000007

def solve():
	n = int(input().rstrip())

	sumval = (n * (n + 1)) // 2
	sumval %= MOD

	answer = (sumval * sumval) % MOD
	
	write(str(answer) + "\n")
	
if __name__ == "__main__":
	solve()
