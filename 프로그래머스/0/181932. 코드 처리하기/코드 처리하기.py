def solution(code):
    ret = ''
    mode = 0
    for i in range(len(code)):
        if mode:
            if code[i] == '1':
                mode = 0
            else:
                if i % 2 == 1:
                    ret += code[i]
        else:
            if code[i] == '1':
                mode = 1
            else:
                if i % 2 == 0:
                    ret += code[i]
    
    return ret if ret else "EMPTY"
                    