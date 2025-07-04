list=[8,4,10,3,8]

for i in range(len(list)):
    for j in range(len(list)):
        if(list[j]>list[j+1]):
            list[j],list[j+1]=list[j+1],list[j]
print(list)