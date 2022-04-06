#include <stdio.h>

int main() {
    int n,i,x=0;
    char a[4];

    scanf("%d",&n);

    for(i=0;i<=n;i++) {
        gets(a);
        if(a[0]=='+' || a[2]=='+'){
            x++;
        }
        else if(a[0]=='-' || a[2]=='-'){
            x--;
        }
    }
    printf("%d",x);

    return 0;
}
