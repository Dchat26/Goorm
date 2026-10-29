def solution(emergency):
    dict = {}
    for idx, i in enumerate(sorted(emergency, reverse=True)):
        dict[i] = idx + 1
    
    return [dict[j] for j in emergency]