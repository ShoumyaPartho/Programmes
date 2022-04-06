#include<stdio.h>
#include<string.h>

int main() {

    char ara[1000];
    int i,j,l,a=0,b=0;
    scanf("%s",ara);
    l=strlen(ara);
    for(i=0;i<l;i++) {
        if(ara[i]>='A' && ara[i]<='Z') a++;
        else if(ara[i]>='a' && ara[i]<='z') b++;
    }
    if(a<b) {
        for(i=0;i<l;i++) {
            if(ara[i]>='A' && ara[i]<='Z') ara[i]='a'+ara[i]-'A';
        }
    }
    else if(a>b) {
        for(i=0;i<l;i++) {
            if(ara[i]>='a' && ara[i]<='z') ara[i]='A'+ara[i]-'a';
        }
    }
    else if(a==b) {
        for(i=0;i<l;i++) {
            if(ara[i]>='A' && ara[i]<='Z') ara[i]='a'+ara[i]-'A';
        }
    }
    printf("%s\n",ara);

    return 0;
}
