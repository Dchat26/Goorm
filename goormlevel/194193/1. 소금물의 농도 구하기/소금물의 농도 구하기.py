import sys
import math

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n, m = map(int, input().split())

	salt = (7 / 100 * n)
	
	answer = (salt / (n + m)) * 100
	answer = math.floor(answer * 100) / 100
	
	write(f"{answer:.2f}\n")

if __name__ == "__main__":
	solve()