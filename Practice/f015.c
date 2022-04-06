#include<stdio.h>
unsigned long long int ara[200];

unsigned long long int fib(int n){
    //if (n==1 || n==2) return 1;
    if (ara[n]!=0) return ara[n];
    else ara[n]=fib(n-1)+fib(n-2);
    return ara[n];
}

int main(){
    unsigned long long int n,res;
    printf("Please enter the required Fibonaaci number: ");
    scanf("%lld",&n);
    ara[1]=ara[2]=1;
    res=fib(n);
    printf("The required Fib Num is : %lld\n",res);
    return 0;
}
