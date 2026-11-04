def solution(t, p):
    tlen = len(t)
    plen = len(p)
    answer = 0

    for i in range(tlen - plen + 1):
        s = t[i:i+plen]

        if s <= p:
            answer += 1

    return answer