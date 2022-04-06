#include<stdio.h>

int main() {
    freopen("d:\\Programmes\\in.txt","rt",stdin);
    freopen("d:\\Programmes\\out.txt","wt",stdout);
    int a,b;
    while(2==scanf("%d %d",&a,&b)) printf("%d\n",a+b);
    return 0;
}
