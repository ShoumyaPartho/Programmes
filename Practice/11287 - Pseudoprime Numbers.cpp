#include<iostream>
#include<cmath>
using namespace std;

bool isprime(unsigned long long int p){
    long long c=sqrt(p);
    for(long long i=2;i<=c+1;i++){
        if(p%i==0) return false;
    }
    return true;
}

unsigned long long int power(unsigned long long int a,unsigned long long int p){
    unsigned long long int res=1,x=p;
    a%=x;
    while(p>0){
        if(p & 1){
            res=(a*res)%x;
        }
        p=p/2;
        a=(a*a)%x;
    }
    return res;
}

int main(){
    unsigned long long int a,p,res;
    while(cin>>p>>a, a && p){
        bool prime=isprime(p);
        if(prime) cout<<"no"<<endl;
        else {
            res=power(a,p);
            (res==a)? cout<<"yes"<<endl:cout<<"no"<<endl;
        }
    }
    return 0;
}
