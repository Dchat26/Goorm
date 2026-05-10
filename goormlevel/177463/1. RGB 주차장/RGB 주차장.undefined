import sys

def solve():
    input = sys.stdin.readline
    
    n = int(input().rstrip())

    MOD = 100000007
    
    if n == 1:
        print(3 % MOD)
        return

    answer = (3 * pow(2, n - 1, MOD)) % MOD
    
    print(answer)

if __name__ == "__main__":
    solve()