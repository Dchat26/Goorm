def solution(myString, pat):
    mlen = len(myString)
    plen = len(pat)
    
    for i in range(mlen - plen, -1, -1):
        if pat == myString[i:i+plen]:
            return myString[:i+plen]