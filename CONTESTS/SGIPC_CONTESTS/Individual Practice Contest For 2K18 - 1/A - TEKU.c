#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    int t,l,a,i;
    scanf("%d",&t);
    while(t--) {
        char ara[10000],temp;
        a=0;
        while(scanf("%s",ara)) {

            l=strlen(ara);
            temp=ara[0];
            for(i=1;i<l;i++){
                ara[i-1]=ara[i];
                if(!a) {
                    if(ara[0]>='a' && ara[0] <='z') ara[0]='A'+ara[0]-'a';
                    a=1;
                }
            }
            if(temp>='A' && temp<='Z') ara[l-1]='a'+temp-'A';
            else ara[l-1]=temp;
            ara[l]='\0';
            printf("%s",ara);
            printf("ay ");
        }
        printf("\n");
    }

    return 0;
}
