def solution(n):
    p, pp = 0, 1
    for i in range(n - 1):
        p, pp = pp, (p + pp) % 1234567
    
    return pp