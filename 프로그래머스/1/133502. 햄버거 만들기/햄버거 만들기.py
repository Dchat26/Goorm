def solution(ingredient):
    temp = []
    answer = 0

    for i in ingredient:
        temp.append(i)

        if len(temp) >= 4:
            is_TF = True

            for idx, j in enumerate([1, 3, 2, 1]):
                if temp[-(idx + 1)] != j:
                    is_TF = False
                    break

            if is_TF:
                for _ in range(4):
                    temp.pop()

                answer += 1

    return answer