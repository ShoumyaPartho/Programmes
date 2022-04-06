grp=int(input())
fday=int(input())
day=0
while(day<fday):
    day+=grp
    if(day<fday):
        grp+=1
print(grp)
