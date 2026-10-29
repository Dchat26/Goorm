def solution(n):
    answer = 0
    for i in range(1, n + 1):
        temp = 0
        for j in range(1, i + 1):
            if i % j == 0:
                temp += 1
        
        if temp >= 3:
            answer += 1
    
    return answer