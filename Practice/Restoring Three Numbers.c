#include<stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=b && a>=c && a>=d) printf("%d %d %d\n",a-b,a-c,a-d);
    else if(b>=a && b>=c && b>=d) printf("%d %d %d\n",b-a,b-c,b-d);
    else if(c>=a && c>=b && c>=d) printf("%d %d %d\n",c-a,c-b,c-d);
    else printf("%d %d %d\n",d-a,d-b,d-c);

    return 0;
}
