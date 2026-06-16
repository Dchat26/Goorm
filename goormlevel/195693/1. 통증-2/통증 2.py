import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    a, b = map(int, input().split())

    bval = n // b

    while bval >= 0:
        remains = n - (bval * b)
        
        if remains % a == 0:
            aval = remains // a
            write(str(bval + aval) + "\n")
            return
        
        bval -= 1
        
    write("-1\n")

if __name__ == "__main__":
    solve()
