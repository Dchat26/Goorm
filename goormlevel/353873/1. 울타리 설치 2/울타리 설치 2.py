import sys
import math

input = sys.stdin.readline
write = sys.stdout.write

def solve():
	n = int(input().rstrip())

	answer = 0
	x, y = map(int, input().split())

	currentx, currenty = x, y
	for _ in range(n - 1):
		tempx, tempy = map(int, input().split())

		answer += math.dist((currentx, currenty), (tempx, tempy))

		currentx, currenty = tempx, tempy
	answer += math.dist((currentx, currenty), (x, y))

	write(str(int(answer)) + "\n")
		
if __name__ == "__main__":
	solve()