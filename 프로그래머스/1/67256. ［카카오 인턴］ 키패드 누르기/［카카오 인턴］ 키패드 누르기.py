def solution(numbers, hand):
    xy = {1: (0, 0), 2: (0, 1), 3: (0, 2), 4: (1, 0), 5: (1, 1),
          6: (1, 2), 7: (2, 0), 8: (2, 1), 9: (2, 2), 0: (3, 1)}

    lx, ly = 3, 0
    rx, ry = 3, 2
    result = ""
    for i in numbers:
        dx, dy = xy[i]

        if i in (1, 4, 7):
            result += 'L'
            lx, ly = dx, dy

        elif i in (3, 6, 9):
            result += 'R'
            rx, ry = dx, dy

        else:
            ld = abs(lx - dx) + abs(ly - dy)
            rd = abs(rx - dx) + abs(ry - dy)

            if ld < rd or (ld == rd and hand == "left"):
                result += 'L'
                lx, ly = dx, dy
            else:
                result += 'R'
                rx, ry = dx, dy

    return result