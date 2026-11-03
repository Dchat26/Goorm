def solution(s):
    slist = list(s)
    
    answer = ""
    temp = ""
    for i in slist:
        if i == " ":
            if temp:
                answer += temp
                answer += i
                temp = ""
            else:
                answer += i
        else:
            if temp:
                temp += i.lower()
            else:
                if i.isdigit():
                    temp += i
                else:
                    temp += i.upper()
    
    if temp:
        answer += temp
    
    return answer
                