def solution(s1, s2):
    dict = {}
    for i in s1:
        if i not in dict:
            dict[i] = 1
        else:
            dict[i] += 1
    
    for j in s2:
        if j not in dict:
            dict[j] = 1
        else:
            dict[j] += 1
        
    result = 0
    for k in dict.values():
        if k == 2:
            result += 1
    
    return result