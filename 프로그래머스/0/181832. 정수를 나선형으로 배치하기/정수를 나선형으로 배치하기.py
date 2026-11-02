def solution(n):
    answer = [[0] * n for _ in range(n)]
    
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    
    xpos = 1
    ypos = 0
    x, y = 0, 0
    for i in range(1, n * n + 1):
        answer[y][x] = i
        
        tmpx = x + xpos
        tmpy = y + ypos
        if 0 <= tmpx and tmpx < n and 0 <= tmpy and tmpy < n and answer[tmpy][tmpx] == 0:
            x += xpos
            y += ypos
        else:
            for j in range(4):
                tx = x + dx[j]
                ty = y + dy[j]
                
                if 0 <= tx and tx < n and 0 <= ty and ty < n and answer[ty][tx] == 0:
                    xpos = dx[j]
                    ypos = dy[j]
                    
                    x += xpos
                    y += ypos
                    break
                    
    return answer