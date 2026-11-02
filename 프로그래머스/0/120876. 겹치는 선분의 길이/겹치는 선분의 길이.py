def solution(lines):
    tp = min(i[0] for i in lines)
    max_val = max(i[1] for i in lines)

    line = [0] * (max_val - tp)

    for a, b in lines:
        for i in range(a - tp, b - tp):
            line[i] += 1

    return sum(1 for i in line if i >= 2)