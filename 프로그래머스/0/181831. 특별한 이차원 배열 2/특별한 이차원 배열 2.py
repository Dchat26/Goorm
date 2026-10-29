def solution(arr):
    s = len(arr)
    for i in range(s):
        for j in range(s):
            if arr[i][j] != arr[j][i]:
                return 0
    return 1