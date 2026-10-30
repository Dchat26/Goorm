def solution(arr, queries):
    answer = []
    for s, e, k in queries:
        aval = -1
        for i in range(s, e + 1):
            if arr[i] > k:
                if aval != -1:
                    aval = min(aval, arr[i])
                else:
                    aval = arr[i]
        answer.append(aval)
    
    return answer