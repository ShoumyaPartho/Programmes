#include <stdio.h>

int main() {

    int a,b,c,d,temp;

    while(scanf("%d%d%d%d",&a,&b,&c,&d) && (a || b || c || d)) {
        temp=1080;

        if(a>b) temp+=((a-b)*9);
        else  temp+=((a-b+40)*9);

        if(c>b) temp+=((c-b)*9);
        else temp+=((c-b+40)*9);

        if(c>d) temp+=((c-d)*9);
        else temp+=((c-d+40)*9);

        printf("%d\n",temp);
    }
    return 0;
}
