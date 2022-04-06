#include<stdio.h>

int main(){
    int sum,a,b,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&sum);
        a=0,b=0;
        b=sum-a;
        if(sum>10){
            a=sum-10;
            b=sum-a;
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
