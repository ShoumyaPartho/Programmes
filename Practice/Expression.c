#include<stdio.h>

int main() {
    int a,b,c,res=0,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a*b*c>res) res=a*b*c;
    if((a+b)*c>res) res=(a+b)*c;
    if(a*(b+c)>res) res=a*(b+c);
    if(a+(b*c)>res) res=a+(b+c);
    if((a*b)+c>res) res=(a*b)+c;
    if(a+b+c>res)   res=a+b+c;

    printf("%d\n",res);

    return 0;
}
