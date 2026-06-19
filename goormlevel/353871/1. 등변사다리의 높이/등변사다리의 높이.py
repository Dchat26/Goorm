import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line:
        return
        
    k, d1, d2 = map(int, line)

    diff = abs(d1 - d2)
    
    answer = (4 * k * k) - (diff * diff)
    if answer < 0:
        answer = 0

    write(str(answer) + "\n")

if __name__ == "__main__":
    solve()
