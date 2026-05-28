import sys

def solve():
    input = sys.stdin.readline
    
    N, K = map(int, input().split())
    
    world = [[0] * 1000 for _ in range(1000)]
    
    for _ in range(N):
        x1, y1, x2, y2 = map(int, input().split())
        
        world[x1][y1] += 1
        world[x2][y1] -= 1
        world[x1][y2] -= 1
        world[x2][y2] += 1
        
    for i in range(1000):
        for j in range(1, 1000):
            world[i][j] += world[i][j-1]
            
    for j in range(1000):
        for i in range(1, 1000):
            world[i][j] += world[i-1][j]
            
    answer = 0
    for i in range(1000):
        for j in range(1000):
            if world[i][j] == K:
                answer += 1
                
    sys.stdout.write(str(answer) + "\n")

if __name__ == "__main__":
    solve()