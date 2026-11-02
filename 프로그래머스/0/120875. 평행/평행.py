def solution(dots):
    for i in range(len(dots)):
        for j in range(i + 1, len(dots)):
            for k in range(len(dots)):
                for l in range(k + 1, len(dots)):
                    if i != k and i != l and j != k and j != l:
                        x1, y1 = dots[i]
                        x2, y2 = dots[j]
                        x3, y3 = dots[k]
                        x4, y4 = dots[l]

                        if (y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1):
                            return 1
    return 0