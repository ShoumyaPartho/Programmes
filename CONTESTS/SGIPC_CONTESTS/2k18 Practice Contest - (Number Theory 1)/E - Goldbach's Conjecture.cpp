#include<stdio.h>
#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    bool check;
    while(scanf("%d",&n) && n!=0){
        check=false;
        for(int i=2;i<=n/2;i++){
            if(isprime(i)&&isprime(n-i)) {
                printf("%d = %d + %d\n",n,i,n-i);
                check=true;
                break;
            }
        }
        if(!check) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
