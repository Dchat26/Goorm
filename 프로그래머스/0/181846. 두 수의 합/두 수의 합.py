def solution(a, b):
    result = ''
    ol = 0
    a = a.zfill(max(len(a), len(b)))
    b = b.zfill(max(len(a), len(b)))
    for a, b in zip(a[::-1], b[::-1]):
        num = int(a) + int(b) + ol
        if num >= 10:
            result = str(num % 10) + result
            
            ol = 1
        else:
            result = str(num) + result
            
            ol = 0
    
    if ol == 1:
        result = '1' + result
    
    return result