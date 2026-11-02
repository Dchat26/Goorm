def solution(a, b, c, d):
    s = sorted([a, b, c, d])
    slen = len(set(s))
    
    if slen == 1:
        return 1111 * a
    elif slen == 4:
        return min(s)
    elif slen == 2:
        if s.count(s[0]) == 1:
            return (s[1] * 10 + s[0]) ** 2
        elif s.count(s[0]) == 3:
            return (s[0] * 10 + s[-1]) ** 2
        else:
            return (s[0] + s[2]) * abs(s[0] - s[2])
    else:
        answer = 1
        for i in s:
            if s.count(i) != 2:
                answer *= i
        return answer
            