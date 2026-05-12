import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    target = list(map(int, input().rstrip()))
    guess = list(map(int, input().rstrip()))

    answer = 0
    while True:
        answer += 1

        strikes = []
        balls = []
        fails = []
        for i in range(4):
            if guess[i] == target[i]:
                strikes.append(i)
            elif guess[i] in target:
                balls.append(i)
            else:
                fails.append(i)

        if len(strikes) == 4:
            write(str(answer) + "\n")
            break

        for i in fails:
            val = guess[i]
            while True:
                val = (val + 1) % 10
                
                is_duplicate = False
                for j in range(4):
                    if i != j and guess[j] == val:
                        is_duplicate = True
                        break
                
                if not is_duplicate:
                    guess[i] = val
                    break

        if len(balls) > 0:
            non_strikes = [i for i in range(4) if i not in strikes]
            
            if len(non_strikes) > 1:
                temp_values = [guess[i] for i in non_strikes]
                
                rotated_values = [temp_values[-1]] + temp_values[:-1]
                
                for idx, pos in enumerate(non_strikes):
                    guess[pos] = rotated_values[idx]

if __name__ == "__main__":
    solve()