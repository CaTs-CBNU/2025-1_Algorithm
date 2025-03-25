import sys

flag = False
lst =[]

while(flag == False):
    lst += list(map(int,sys.stdin.readline().split()))
    if(lst[-1]==0 & lst[-2]==0):
        flag = True 

for i in range((len(lst)-2)//2):
    print(lst[2*i]+lst[2*i+1]) 
