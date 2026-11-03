def solution(s):
    if len(s) == 1:
        return [0, 0]
    
    temp = ""
    acount = 0
    zerocount = 0
    while len(s) > 1:
        acount += 1
        for i in s:
            if i == '0':
                zerocount += 1
            else:
                temp += i
        
        s = str(bin(len(temp)))[2:]
        
        temp = ""
    
    return [acount, zerocount]