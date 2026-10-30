def solution(str_list):
    for idx, i in enumerate(str_list):
        if i == 'l':
            return str_list[:idx]
        elif i == 'r':
            return str_list[idx+1:]
    return []