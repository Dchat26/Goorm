def solution(num, k):
    num = str(num)
    for idx, i in enumerate(num):
        if i == str(k):
            return idx + 1
    return -1