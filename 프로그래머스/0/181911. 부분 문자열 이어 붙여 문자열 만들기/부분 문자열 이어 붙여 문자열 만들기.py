def solution(my_strings, parts):
    answer = ''
    for a, b in zip(my_strings, parts):
        b1, b2 = b
        answer += a[b1:b2+1]
    
    return answer