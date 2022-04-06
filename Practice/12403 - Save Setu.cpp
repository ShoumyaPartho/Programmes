#include <stdio.h>
#include <string.h>

int main() {

    int t,n,am=0;
    char s[6];

    scanf("%d",&t);

    while(t--) {
        scanf("%s",&s);

        if(strcmp(s,"report")==0)   printf("%d\n",am);
        else {
            scanf("%d",&n);
            am+=n;
        }
    }
    return 0;
}
