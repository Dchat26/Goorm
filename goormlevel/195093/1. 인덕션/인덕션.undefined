import sys

def solve():
    input = sys.stdin.readline
    n = int(input().rstrip())
    nlist = list(map(int, input().split()))

    INF = float('inf')
    dp = [[INF] * 10 for _ in range(10)]
    dp[0][0] = 0

    curr_t = 0
    
    def get_dist(a, b):
        diff = abs(a - b)
        return min(diff, 10 - diff)

    for target in nlist:
        next_dp = [[INF] * 10 for _ in range(10)]
        
        for j in range(10):
            for k in range(10):
                if dp[j][k] != INF:
                    cost = dp[j][k]
                    
                    next_dp[j][k] = min(next_dp[j][k], cost + get_dist(curr_t, target))
                    
                    next_dp[curr_t][k] = min(next_dp[curr_t][k], cost + get_dist(j, target))
                    
                    next_dp[j][curr_t] = min(next_dp[j][curr_t], cost + get_dist(k, target))
        
        dp = next_dp
        curr_t = target
        
    answer = INF
    for j in range(10):
        for k in range(10):
            if dp[j][k] < answer:
                answer = dp[j][k]
                
    sys.stdout.write(str(answer) + "\n")

if __name__ == "__main__":
    solve()