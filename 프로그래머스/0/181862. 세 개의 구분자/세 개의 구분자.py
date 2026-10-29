def solution(myStr):
    answer = []
    temp = ''
    for i in myStr:
        if i in ('a', 'b', 'c'):
            if temp != '':
                answer.append(temp)
                temp = ''
        else:
            temp += i
    
    if temp != '':
        answer.append(temp)
    
    return answer if answer else ["EMPTY"]
    