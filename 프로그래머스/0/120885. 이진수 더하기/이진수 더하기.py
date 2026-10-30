def sol(a):
    result = 0
    prod = 1
    while a > 0:
        result += prod * (a % 10)
        
        prod *= 2
        a //= 10
    
    return result

def dsol(b):
    if b == 0:
        return '0'
    
    result = ''
    while b > 0:
        result += str(b % 2)
        
        b //= 2
    
    return result[::-1]

def solution(bin1, bin2):
    return dsol(sol(int(bin1)) + sol(int(bin2)))