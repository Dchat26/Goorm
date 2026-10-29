def solution(n):
    if n % 2 == 1:
        return sum(i if i % 2 == 1 else 0 for i in range(1, n + 1))
    else:
        return sum(i * i if i % 2 == 0 else 0 for i in range(1, n + 1))