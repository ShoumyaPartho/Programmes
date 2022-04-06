#include<stdio.h>
#include<string.h>

int main() {
    char ara1[110],ara2[110],ara[110];
    int i,l;
    scanf("%s %s",ara1,ara2);
    l=strlen(ara1);
    for(i=0;i<l;i++) {
        if(ara1[i]==ara2[i]) ara[i]='0';
        else ara[i]='1';
    }
    ara[i]='\0';
    printf("%s\n",ara);

    return 0;
}
