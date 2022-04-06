#include<iostream>
using namespace std;

int main(){
    unsigned long long int t,a,b,c,temp,large;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cin>>a>>b>>c;
        a=a*a;
        b=b*b;
        c=c*c;
        //cout<<a<<b<<c;
        if(a==(b+c) || b==(a+c) || c==(a+b)) cout<<"Case "<<i<<": "<<"yes"<<endl;
        else cout<<"Case "<<i<<": "<<"no"<<endl;
    }
    return 0;
}
