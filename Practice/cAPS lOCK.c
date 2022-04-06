#include<stdio.h>
#include<string.h>

int main() {
    char ara[105];
    int i,l,c1=0,c2=0;
    scanf("%s",ara);
    l=strlen(ara);
    if(l==1){
        if(ara[0]>='a' && ara[0]<='z') ara[0]='A'+ara[0]-'a';
        else ara[0]='a'+ara[0]-'A';
    }
    else{
        if(ara[0]>='A' && ara[0]<='Z'){
            for(i=0;i<l;i++) {
                if(ara[i]>='A' && ara[i]<='Z') c1=1;
                else {
                    c1=0;
                    break;
                }
            }
        }
        if(c1){
            for(i=0;i<l;i++) {
                ara[i]='a'+ara[i]-'A';
            }
        }
        if(ara[0]>='a' && ara[0]<='z'){
            for(i=1;i<l;i++) {
                if(ara[i]>='A' && ara[i]<='Z') c2=1;
                else {
                    c2=0;
                    break;
                }
            }
        }
        if(c2) {
            ara[0]='A'+ara[0]-'a';
            for(i=1;i<l;i++) {
                ara[i]='a'+ara[i]-'A';
            }
        }
    }

    printf("%s\n",ara);

    return 0;
}
