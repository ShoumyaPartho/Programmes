#include<stdio.h>
#include<string.h>

int main() {
    char ara[105];
    scanf("%s",ara);
    int i,j,l=strlen(ara);
    for(i=0;i<l;i++) {
        if(ara[i]=='H' || ara[i]=='Q' || ara[i]=='9') {
            j=1;
            break;
        }
        else j=0;
    }
    if(j) printf("YES\n");
    else printf("NO\n");

    return 0;
}
