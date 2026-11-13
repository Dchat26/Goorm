from math import lcm

def solution(signals):
    total = 1
    for g, y, r in signals:
        total = lcm(total, g + y + r)

    for t in range(1, total + 1):
        ok = True
        for g, y, r in signals:
            m = (t - 1) % (g + y + r)
            if not (g <= m < g + y):
                ok = False
                break
        if ok:
            return t
    return -1