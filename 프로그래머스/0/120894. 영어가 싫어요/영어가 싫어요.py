def solution(numbers):
    dict = {"zero": 0, "one": 1, "two": 2, "three": 3, "four": 4, "five": 5, 
            "six": 6, "seven": 7, "eight": 8, "nine": 9}
    
    answer = 0
    start = 0
    nlen = len(numbers)
    while start < nlen:
        temp = ''
        for i in range(start, nlen):
            temp += numbers[i]
            
            if temp in dict:
                answer = answer * 10 + dict[temp]
                start = i + 1
                break
    
    return answer
    