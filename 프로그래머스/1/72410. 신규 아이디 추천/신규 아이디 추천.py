def solution(new_id):
    new_id = new_id.lower()

    result = ""
    for i in new_id:
        if i.isalpha() or i.isdigit() or i in ('-', '_', '.'):
            result += i

    result2 = ""
    for i in result:
        if i == '.' and result2 and result2[-1] == '.':
            continue
        result2 += i

    if result2 and result2[0] == '.':
        result2 = result2[1:]

    if result2 and result2[-1] == '.':
        result2 = result2[:-1]

    if not result2:
        result2 = 'a'

    if len(result2) >= 16:
        result2 = result2[:15]

        if result2[-1] == '.':
            result2 = result2[:-1]

    while len(result2) < 3:
        result2 += result2[-1]

    return result2