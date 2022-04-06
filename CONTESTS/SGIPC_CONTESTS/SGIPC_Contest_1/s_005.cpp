#include <stdio.h>
#include <string.h>

int main() {

    int i,j,p,q,s;
    char a[102],b[103];

    scanf("%s",a);
    scanf("%s",b);

    p= strlen(a);

    for(i=0,j=(p-1);i<p;i++,j--) {
        if(a[i]==b[j]) {
            s=0;
        }
        else {
            s=1;
            break;
        }
    }

    if(!s) printf("YES");
    else if(s) printf("NO");

    return 0;
}
