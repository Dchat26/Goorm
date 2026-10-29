def solution(array, n):
    dict = {}
    for i in array:
        if i not in dict:
            dict[i] = 1
        else:
            dict[i] += 1
    
    return dict[n] if n in dict else 0