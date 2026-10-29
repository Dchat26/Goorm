def solution(arr, intervals):
    a1, a2 = intervals[0]
    b1, b2 = intervals[1]
    
    return arr[a1:a2+1] + arr[b1:b2+1]