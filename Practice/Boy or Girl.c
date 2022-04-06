#include<stdio.h>
#include<string.h>

int main() {

    int mil,count=1,i,j,l;
    char ara[105];
    scanf("%s",ara);
    l=strlen(ara);

    for(i=1;i<l;i++) {
        for(j=0;j<i;j++) {
            if(ara[j]==ara[i]){
                mil=1;
                break;
            }
            else mil=0;
        }
        if(mil==0) count++;
    }
    if(count%2==1) printf("IGNORE HIM!\n");
    else if(count%2==0)printf("CHAT WITH HER!\n");

    return 0;
}
