def solution(arr):
    current = arr
    answer = 0
    while (1):
        temp = []
        for idx, i in enumerate(current):
            if i >= 50 and i % 2 == 0:
                temp.append(current[idx] // 2)
            elif i < 50 and i % 2 == 1:
                temp.append(current[idx] * 2 + 1)
            else:
                temp.append(i)
        
        if current == temp:
            return answer
        else:
            current = temp
            answer += 1