import sys
input = sys.stdin.readline

n=int(input().rstrip())
stack = []
for i in range(n):
    order = input().rstrip()
    if 'push' in order:
        order = order.strip('push').strip()
        stack.append(int(order))
    elif order == 'pop':
        try:
            print(stack.pop())
        except:
            print(-1)
    elif order == 'top':
        try:
            print(stack[-1])
        except:
            print(-1)
    elif order == 'size':
        print(len(stack))
    elif order == 'empty':
        if(len(stack)):
            print(0)
        else:print(1)