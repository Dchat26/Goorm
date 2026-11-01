import math

def solution(a, b):
    c = math.gcd(a, b)
    
    a //= c
    b //= c
    
    while b % 2 == 0:
        b //= 2
    
    while b % 5 == 0:
        b //= 5
        
    if b == 1:
        return 1
    return 2