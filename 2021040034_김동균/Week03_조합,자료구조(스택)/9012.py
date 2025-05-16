import sys
input = sys.stdin.readline

n=int(input().rstrip())
a=[]

for i in range(n):
    a.append(input().strip())

for i in a:
    stack=[]
    for j in i:
        if j== '(' :
            stack.append(j)
        elif j == ')' and stack :
            if stack[-1]=='(':
                stack.pop()
        elif j==')' and not stack:
            stack.append(')')
            break
    if stack :
        if stack[-1]==')':
            print('NO')
        else : print('NO')
    else:
        print('YES')

