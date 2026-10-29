def solution(num_list):
    temp = 1
    for i in num_list:
        temp *= i
        
    return 1 if temp < sum(num_list) ** 2 else 0