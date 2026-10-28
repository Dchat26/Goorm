def fac(n):
    result = 1
    for i in range(n, 0, -1):
        result *= i
        
    return result

def solution(balls, share):
    a = fac(balls - share)
    b = fac(share)
    c = fac(balls)
    
    return c // (a * b)