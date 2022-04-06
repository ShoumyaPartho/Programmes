#include<stdio.h>

int main(){
    int n,k,temp;
    scanf("%d %d",&n,&k);
    temp=n%k;
    k-=temp;
    n+=k;
    printf("%d\n",n);
    return 0;
}
