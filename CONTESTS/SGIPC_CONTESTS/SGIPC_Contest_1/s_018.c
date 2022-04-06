#include<stdio.h>

int main() {

    int a,b,lcm,high,x;

    scanf("%d %d",&a,&b);

    if(a>b) {
        high=a;
        x=a;
    }
    else {
        high=b;
        x=b;
    }

    while(1) {
        if(high%a==0 && high%b==0) {
            lcm=high;
            break;
        }
        else high+=x;

    }
    printf("%d\n",lcm);

    return 0;
}
