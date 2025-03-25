import sys
num = int(sys.stdin.readline())
for i in range(9):
    print(f"{num} * {i+1} = {num*(i+1)}")
