def solution(dots):
    xval = dots[0][0]
    yval = dots[0][1]
    
    max_x, min_x, max_y, min_y = xval, xval, yval, yval
    for i in dots[1:]:
        a, b = i
        
        if max_x < a:
            max_x = a
        if min_x > a:
            min_x = a
            
        if max_y < b:
            max_y = b
        if min_y > b:
            min_y = b
    
    return (max_x - min_x) * (max_y - min_y)