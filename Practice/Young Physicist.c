#include<stdio.h>

int main() {
    int n,a=0,b=0,c=0,i,j;
    scanf("%d",&n);
    int ara[n][3];
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        a+=ara[i][0];
        b+=ara[i][1];
        c+=ara[i][2];
    }
    if(a==0 && b==0 && c==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
