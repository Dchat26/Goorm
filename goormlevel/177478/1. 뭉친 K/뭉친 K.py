import sys
from collections import deque

def solve():
    input = sys.stdin.readline
    
    n = int(input())
    x, y = map(int, input().split())

    matrix = [list(map(int, input().split())) for _ in range(n)]
    
    target_k = matrix[x - 1][y - 1]
    
    visited = [[False] * n for _ in range(n)]
    
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    
    max_group_size = 0
    
    for i in range(n):
        for j in range(n):
            if matrix[i][j] == target_k and not visited[i][j]:
                
                queue = deque([(i, j)])
                visited[i][j] = True
                current_group_size = 0
                
                while queue:
                    cx, cy = queue.popleft()
                    current_group_size += 1 
									
                    for d in range(4):
                        nx = cx + dx[d]
                        ny = cy + dy[d]
                        
                        if 0 <= nx < n and 0 <= ny < n:
                            if not visited[nx][ny] and matrix[nx][ny] == target_k:
                                visited[nx][ny] = True
                                queue.append((nx, ny))
 
                if current_group_size > max_group_size:
                    max_group_size = current_group_size

    print(max_group_size)

if __name__ == "__main__":
    solve()