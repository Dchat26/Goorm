stack = []

n, k = map(int, input().split())

for _ in range(n):
	s = input().split()

	if s[0] == "push":
		num = int(s[1])

		if len(stack) < k:
			stack.append(num)
		else:
			print("Overflow")
	elif s[0] == "pop":
		if len(stack) != 0:
			print(stack.pop())
		else:
			print("Underflow")