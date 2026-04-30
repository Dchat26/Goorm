n, m = map(int, input().split())

nlist = list(map(int, input().split()))

print(" ".join(str(i) if i % m == 0 else str(i * m) for i in nlist))