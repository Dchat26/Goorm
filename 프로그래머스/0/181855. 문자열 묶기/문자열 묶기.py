def solution(strArr):
    dict = {}
    for i in strArr:
        if len(i) not in dict:
            dict[len(i)] = 1
        else:
            dict[len(i)] += 1
    
    return max(dict.values())