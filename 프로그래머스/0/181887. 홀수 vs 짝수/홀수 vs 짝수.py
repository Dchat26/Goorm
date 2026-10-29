def solution(num_list):
    return max(sum(i for idx, i in enumerate(num_list) if (idx + 1) % 2 == 1),
              sum(i for idx, i in enumerate(num_list) if (idx + 1) % 2 == 0))