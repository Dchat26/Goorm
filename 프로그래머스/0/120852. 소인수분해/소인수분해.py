def solution(n):
    answer = set()
    
    tmp = 2
    while n > 1:
        if n % tmp == 0:
            answer.add(tmp)
            n //= tmp
        else:
            temp = tmp + 1
            while True:
                is_TF = True
                for i in range(2, temp):
                    if temp % i == 0:
                        is_TF = False
                        break
                
                if is_TF:
                    tmp = temp
                    break
                else:
                    temp += 1
    
    return sorted(answer)