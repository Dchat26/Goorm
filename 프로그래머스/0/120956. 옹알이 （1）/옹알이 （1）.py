def solution(babbling):
    s = ["aya", "ye", "woo", "ma"]
    
    answer = 0
    for i in babbling:
        temp = ''
        for j in i:
            temp += j
            
            if temp in s:
                temp = ''
        
        if not temp:
            answer += 1
    
    return answer