import sys

def solve():
    input = sys.stdin.readline
    
    MOD = 1000000007

    n = int(input().rstrip())

    if n == 1 or n == 2:
        print(1)
        return

    dp = [0] * (n + 1)

    dp[0] = 1
    dp[1] = 1
    dp[2] = 1

    for i in range(3, n + 1):
        dp[i] = (dp[i - 1] + dp[i - 3]) % MOD

    print(dp[n])

if __name__ == "__main__":
    solve()