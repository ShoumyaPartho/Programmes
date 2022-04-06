#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define MOD 1000000007

long long int power(long long int n){
    long long int t=2,x=1;

    while(n){
        if(n%2==1) x=(x*t)%MOD;
        t=(t*t)%MOD;
        n/=2;
    }

    return x;
}

int main(){
    long long int t,n,res;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        res=((n%MOD)*power(n-1))%MOD;
        printf("Case #%d: %lld\n",i,res);
    }
    return 0;
}
