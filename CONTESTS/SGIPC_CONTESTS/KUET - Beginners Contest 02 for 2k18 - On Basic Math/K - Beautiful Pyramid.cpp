#include<iostream>
using namespace std;

int main(){
    unsigned long long int a,b,c;
    while(1) {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0) break;
        a=a*a;
        b=b*b;
        c=c*c;
        if(a==(b+c) || b==(a+c) || c==(a+b)) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }
    return 0;
}
