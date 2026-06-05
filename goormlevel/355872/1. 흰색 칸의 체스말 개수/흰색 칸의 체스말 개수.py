import sys

def solve():
    input = sys.stdin.readline
    write = sys.stdout.write

    chessmap = [input().rstrip() for _ in range(8)]

    answer = sum(1 for r in range(8) for c in range(8) if (r + c) % 2 == 0 and chessmap[r][c] == '1')

    write(str(answer) + "\n")

if __name__ == "__main__":
    solve()
