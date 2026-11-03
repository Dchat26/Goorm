def solution(s):
    temp = []
    for i in s:
        if not temp:
            temp.append(i)
        elif temp[-1] == i:
            temp.pop()
        else:
            temp.append(i)

    if temp:
        return 0
    else:
        return 1