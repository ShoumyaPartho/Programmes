lst1=[]
lst2=[]
i=0
while(i<5):
    a=int(input())
    lst1.append(a)
    i+=1
i=0
while(i<5):
    a=int(input())
    lst2.append(a)
    i+=1
i=0
while(i<5):
    if(lst1[i]!=lst2[i]):
        a=1;
    else:
        a=0;
        break;
    i+=1
if(a==1):
    print("Y")
elif(a==0):
    print("N")
