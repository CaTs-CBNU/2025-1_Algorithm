n = int(input())
a, b = [], []
for i in range(n):
    p, q = map(int, input().split())
    a.append(p)
    b.append(q)
for i in range(n):
    print(f"Case #{i+1}: {a[i] + b[i]}")