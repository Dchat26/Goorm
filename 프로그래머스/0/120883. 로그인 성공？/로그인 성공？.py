def solution(id_pw, db):
    a, b = id_pw
    for c, d in db:
        if a == c and b == d:
            return "login"
        elif a == c and b != d:
            return "wrong pw"
    return "fail"