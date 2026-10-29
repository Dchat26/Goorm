def solution(strArr):
    return [i.lower() if idx % 2 == 0 else i.upper() for idx, i in enumerate(strArr)]