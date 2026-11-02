import math

def solution(numer1, denom1, numer2, denom2):
    numer = numer1 * denom2 + numer2 * denom1
    denom = denom1 * denom2
    
    s = math.gcd(numer, denom)
    
    return [numer // s, denom // s]