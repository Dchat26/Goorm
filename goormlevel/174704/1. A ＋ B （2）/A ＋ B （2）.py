import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve() :
    line = input().split()
    if not line : return

        a, b = map(float, line)

        write(f"{(a + b):.6f}\n")

        if __name__ == "__main__":
solve()