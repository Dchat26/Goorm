def solution(arr, n):
    if len(arr) % 2 == 0:
        return [i if idx % 2 == 0 else i + n for idx, i in enumerate(arr)]
    else:
        return [i + n if idx % 2 == 0 else i for idx, i in enumerate(arr)]