n=int(input())
lst=[]
i=0
while(i<n):
    a=int(input())
    lst.append(a)
    i+=1
cost=int(input())
lst.sort()
i=0
d=1000001
while(i<n-1):
    j=i+1
    while(lst[i]+lst[j]<=cost):
        if((lst[i]+lst[j])==cost):
            if((lst[j]-lst[i])<d):
                a=lst[i]
                b=lst[j]
                d=lst[j]-lst[i]
                break
        j+=1
    i+=1
print("Peter should buy books whose prices are ",a," and ",b)
