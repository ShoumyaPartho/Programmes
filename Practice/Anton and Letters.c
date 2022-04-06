#include<stdio.h>
#include<string.h>

int main() {
    char ara1[1010];
    int ara[30];
    scanf("%[^\n]s",ara1);
    int i,l,count=0,x;
    l=strlen(ara1);
    for(i=0;i<30;i++) ara[i]=0;
    for(i=0;i<l;i++) {
        if(ara1[i]>='a' && ara1[i]<='z') {
            x=(int)ara1[i]-97;
            ara[x]=1;
        }
    }
    for(i=0;i<28;i++) {
        if(ara[i]==1) count++;
    }
    printf("%d\n",count);

    return 0;
}
