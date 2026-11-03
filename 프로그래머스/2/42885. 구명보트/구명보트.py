def solution(people, limit):
    people.sort(reverse=True)
    
    temp = []
    answer = 0
    for i in people:
        if temp and temp[-1] + i <= limit:
            answer += 1
            temp.pop()
        else:
            temp.append(i)
    
    if temp:
        answer += len(temp)
    
    return answer