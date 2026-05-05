_ = input()
nlist = list(map(int, input().split()))

max_val = temp = current = nlist[0]
for i in nlist[1:]:
	if current + 1 == i:
		temp += i
		current = i
	else:
		max_val = max(temp, max_val)
		temp = i
		current = i
max_val = max(temp, max_val)

print(max_val)