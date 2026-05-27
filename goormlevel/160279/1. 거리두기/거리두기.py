import sys

def solve():
    input = sys.stdin.readline
    n = int(input().rstrip())
    
    MOD = 100000007
    
    a, b, c, d = 1, 1, 1, 1
    
    for _ in range(n - 1):
        next_a = (a + 2 * b + c + d) % MOD
        next_b = (a + b + c) % MOD
        next_c = (a + 2 * b + d) % MOD
        next_d = (a + c) % MOD
        
        a, b, c, d = next_a, next_b, next_c, next_d
        
    answer = (a + 2 * b + c + d) % MOD
    sys.stdout.write(str(answer) + "\n")

if __name__ == "__main__":
    solve()