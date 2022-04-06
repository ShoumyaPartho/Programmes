#include<stdio.h>

int main() {

    char a[105],i,j=0,s=1;

    scanf("%s",a);
    for(i=0;a[i];i++) {
        j++;
    }
    for(i=1;i<j;i++) {
        if(a[i]==a[i-1]) s++;
        else s=1;
        if(s==7) break;
    }
    if(s!=7) printf("NO\n");
    else if(s==7) printf("YES\n");

    return 0;
}
