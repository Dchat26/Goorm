def solution(date1, date2):
    for a, b in zip(date1, date2):
        if b - a > 0:
            return 1
        elif b - a < 0:
            return 0
    return 0