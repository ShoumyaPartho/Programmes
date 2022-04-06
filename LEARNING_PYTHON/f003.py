n=int(input("Please enter a number:"))
lst=[]
i=0
while(i<n):
    a=int(input())
    lst.append(a)
    i+=1
i=0
#before sorting
while(i<n):
    print("The ",i+1,"th element of list is:",lst[i])
    i+=1
lst.sort(reverse=True)
i=0
#after sorting
while(i<n):
    print("The ",i+1,"th element of list is:",lst[i])
    i+=1
