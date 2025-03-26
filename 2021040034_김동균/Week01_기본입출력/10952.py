i = []
i.append(list(map(int, input().split())))
while(i[-1] != [0, 0]):
    i.append(list(map(int, input().split())))

for j in i:
    if(not j[0] and not j[1]): break
    print(j[0] + j[1])
    
    