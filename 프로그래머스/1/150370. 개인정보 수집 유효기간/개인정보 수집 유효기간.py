def solution(today, terms, privacies):
    termdict = {}
    for i in terms:
        a, b = i.split()
        termdict[a] = termdict.get(a, 0) + int(b)
    
    ty, tm, td = map(int, today.split('.'))
    t = ty * 12 * 28 + tm * 28 + td
    
    answer = []
    for p, i in enumerate(privacies, start=1):
        a, b = i.split()
        ay, am, ad = map(int, a.split('.'))
        at = ay * 12 * 28 + am * 28 + ad + termdict[b] * 28
        
        if at <= t:
            answer.append(p)
    
    return answer