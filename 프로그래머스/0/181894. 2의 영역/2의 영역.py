def solution(arr):
    front = 0
    rear = 0
    for i in range(len(arr)):
        if arr[i] == 2:
            front = i
            break
    
    for j in range(len(arr) - 1, -1, -1):
        if arr[j] == 2:
            rear = j + 1
            break
    
    return arr[front:rear] if rear != 0 else [-1]