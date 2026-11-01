def solution(l, r):
    answer = []
    for i in range(l, r + 1):
        s = list(str(i))
        
        if s.count('0') + s.count('5') == len(s):
            answer.append(i)
    
    if answer:
        return answer
    else:
        return [-1]