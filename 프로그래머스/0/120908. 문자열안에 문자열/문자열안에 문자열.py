def solution(str1, str2):
    s = len(str2)
    for i in range(len(str1) - s + 1):
        if str1[i:i+s] == str2:
            return 1
    return 2