def solution(array):
    max_val = max(array)
    
    for index, i in enumerate(array):
        if i == max_val:
            return [max_val, index]