import sys

s = list(sys.stdin.readline().rstrip())

i=0
for x in s:
    print(x, end='')
    i+=1

    if(i==10):
        i=0
        print()

