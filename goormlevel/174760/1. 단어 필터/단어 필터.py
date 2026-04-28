s, e = map(int, input().split())

sval = input()
eval = input()
slist = list(sval)

stack = []
for i in eval:
	stack.append(i)

	if len(stack) >= s:
		if stack[-s:] == slist:
			del stack[-s:]

if stack:
	print("".join(stack))
else:
	print("EMPTY")