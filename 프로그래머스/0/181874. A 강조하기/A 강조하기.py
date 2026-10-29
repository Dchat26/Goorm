def solution(myString):
    return "".join([i.upper() if i == 'a' else i for i in myString.lower()])