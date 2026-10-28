def solution(emergency):
    s = sorted(emergency, reverse=True)
    
    result = []
    for i in emergency:
        for index, j in enumerate(s):
            if i == j:
                result.append(index + 1)
    
    return result