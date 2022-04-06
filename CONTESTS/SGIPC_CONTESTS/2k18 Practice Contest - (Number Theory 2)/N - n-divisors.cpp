#include<iostream>
using namespace std;

int main(){
    int a,b,n,div=0,cnt=0,res=1,p,x;
    cin>>a>>b>>n;
    if(a>b) swap(a,b);

    for(int t=a;t<=b;t++){
        x=t,div=0,res=1;
        if(x==1) {
            div++;
            if(res==n) {
                cnt++;
                continue;
            }
            else continue;
        }
        p=2;
        while(x%p==0){
            x/=p;
            div++;
        }
        if(div) res*=(div+1);

        for(p=3;p*p<=x;p++){
            div=0;
            while(x%p==0){
                x/=p;
                div++;
            }
            if(div) res*=(div+1);
        }
        if(x>1) res*=2;
        if(res==n) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
