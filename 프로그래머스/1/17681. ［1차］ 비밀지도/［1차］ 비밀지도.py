def solution(n, arr1, arr2):
    a1 = []
    a2 = []
    for a, b in zip(arr1, arr2):
        a1.append(bin(a)[2:].zfill(n))
        a2.append(bin(b)[2:].zfill(n))
    
    result = []
    for a, b in zip(a1, a2):
        temp = ""
        for c, d in zip(a, b):
            if c == '1' or d == '1':
                temp += '#'
            else:
                temp += ' '
        result.append(temp)
    
    return result