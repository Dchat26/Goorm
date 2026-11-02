def solution(board):
    dx = [0, 0, 1, -1, 1, -1, 1, -1]
    dy = [1, -1, 0, 0, 1, -1, -1, 1]
    
    row = len(board)
    col = len(board[0])
    
    bomb = []
    for i in range(row):
        for j in range(col):
            if board[i][j] == 1:
                bomb.append((i, j))
                
    for i, j in bomb:
        for a, b in zip(dx, dy):
            x = j + a
            y = i + b
            if 0 <= x and x < col and 0 <= y and y < row:
                board[y][x] = 1
    
    return sum(i.count(0) for i in board)