#include<stdio.h>

int main(){
    int n,one=0,zero=0;
    scanf("%d",&n);
    while(n){
        if(n & 1) one++;
        else zero++;
        n=n>>1;
    }
    printf("Zeros: %d\nOnes: %d\n",zero,one);
    return 0;
}
