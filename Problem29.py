#9183
dic={}
i = 2
while i<=100:
    j = 2
    while j<=100:
        dic[pow(i,j)] = 1;
        j+=1
    i+=1
print(len(dic))
