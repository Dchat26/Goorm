def solution(arr, k):
    answer = [-1] * k
    temp = set()
    cnt = 0
    for i in arr:
        if i not in temp:
            answer[cnt] = i
            temp.add(i)
            cnt += 1
        
        if cnt == k:
            break
    
    return answer