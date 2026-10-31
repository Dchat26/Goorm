def solution(sides):
    s = set()
    
    a, b = sides
    if a > b:
        c = a - b + 1
        while c <= a:
            s.add(c)
            
            c += 1
        
        d = a + 1
        while d < a + b:
            s.add(d)
            
            d += 1
    else:
        c = b - a + 1
        while c <= b:
            s.add(c)
            
            c += 1
        
        d = b + 1
        while d < a + b:
            s.add(d)
            
            d += 1
            
    return len(s)
    