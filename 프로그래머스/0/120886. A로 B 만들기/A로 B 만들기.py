def solution(before, after):
    dict = {}
    for i in after:
        if i not in dict:
            dict[i] = 1
        else:
            dict[i] += 1
    
    for j in before:
        if j not in dict:
            return 0
        else:
            dict[j] -= 1
            
    for i in dict.values():
        if i != 0:
            return 0
    return 1