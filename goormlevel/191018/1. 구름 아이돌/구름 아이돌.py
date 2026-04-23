n = int(input())
nlist = list(map(int, input().split()))

idxlist = [(val, idx) for idx, val in enumerate(nlist)]
idxlist.sort(key = lambda x : (-x[0], x[1]))

result = [item[1] + 1 for item in idxlist[:3]]

print(*result)