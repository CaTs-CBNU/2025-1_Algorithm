import sys
input = sys.stdin.readline
n = int(input().rstrip())
arr = list(map(int, input().split()))
print(f"{min(arr)} {max(arr)}")
