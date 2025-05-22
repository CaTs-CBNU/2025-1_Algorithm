import sys
input=sys.stdin.readline

n=int(input().rstrip())
queue=[]
for i in range(n):
    order=input().rstrip()
    if 'push' in order :
        order = order.strip('push').strip()
        queue.append(int(order))
    elif order=='pop':
        try:
            print(queue.pop(0))
        except:
            print(-1)
    elif order == 'size':
        print(len(queue))
    elif order == 'empty':
        if len(queue):
            print(0)
        else: print(1)

    elif order == 'front':
        try:
            print(queue[0])
        except:
            print(-1)
    elif order == 'back':
        try:
            print(queue[-1])
        except:
            print(-1)