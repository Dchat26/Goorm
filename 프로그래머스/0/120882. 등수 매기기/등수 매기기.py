def solution(score):
    result = []
    for i in score:
        result.append(sum(i) / 2)
        
    answer = []
    for i in result:
        temp = 1
        for j in result:
            if i < j:
                temp += 1
        answer.append(temp)
    
    return answer