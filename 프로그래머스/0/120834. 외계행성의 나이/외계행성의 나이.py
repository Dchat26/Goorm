def solution(age):
    dict = {}
    for i in range(26):
        dict[i] = chr(97+i)
    
    answer = ''
    for j in str(age):
        answer += dict[int(j)]
    
    return answer