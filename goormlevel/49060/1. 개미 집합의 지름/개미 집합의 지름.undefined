import sys

def solve():
    input = sys.stdin.readline
    write = sys.stdout.write

    n, d = map(int, input().split())
    nlist = list(map(int, input().split()))

    nlist.sort()

    left = 0
    right = 0
    max_len = 0

    while right < n:
        if nlist[right] - nlist[left] <= d:
            max_len = max(max_len, right - left + 1)
            right += 1 
        else:
            left += 1

    write(str(n - max_len) + "\n")

if __name__ == "__main__":
    solve()