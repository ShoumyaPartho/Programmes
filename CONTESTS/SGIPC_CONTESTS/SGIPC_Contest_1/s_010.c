#include<stdio.h>
#include<string.h>

int main() {

    int t,i,s,j,k,l;
    char num[50];

    scanf("%d",&t);

    for(i=1;i<=t;i++) {
        scanf("%s",num);
        l=strlen(num);
        for(j=0,k=l-1;j<l;j++,k--) {
            if(num[j]==num[k]) s=1;
            else {
                s=0;
                break;
            }
        }
        if(s) printf("Case %d: Yes\n",i);
        else if(!s) printf("Case %d: No\n",i);
    }
    return 0;
}
