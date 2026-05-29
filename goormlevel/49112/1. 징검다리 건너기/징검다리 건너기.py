import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    p = [0] + list(map(int, input().split())) + [0]
    
    dp = [float('inf')] * (n + 2)
    dp[0] = 0
    for i in range(1, n + 2):
        min_val = float('inf')
        if i >= 1: min_val = min(min_val, dp[i - 1])
        if i >= 2: min_val = min(min_val, dp[i - 2])
        if i >= 3: min_val = min(min_val, dp[i - 3])
        
        dp[i] = min_val + p[i]

    write(str(dp[n + 1]) + "\n")

if __name__ == "__main__":
    solve()