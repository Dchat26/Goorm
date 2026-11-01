def solution(keyinput, board):
    dict = {"up": 0, "down": 1, "right": 2, "left": 3}
    
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    
    x, y = 0, 0
    bx, by = board
    for i in keyinput:
        xval = x + dx[dict[i]]
        yval = y + dy[dict[i]]
        
        bxval = bx // 2
        byval = by // 2
        
        if -bxval <= xval and xval <= bxval and -byval <= yval and yval <= byval:
            x, y = xval, yval
            
    return [x, y]