#include<iostream>
using namespace std;

int main(){
    long long int n,cnt,p;

    while(1){
        cin>>n;
        if(n==0) break;

        p=2,cnt=0;
        while(n%p==0){
            cnt++;
            n/=p;
        }
        if(cnt) cout<<p<<"^"<<cnt<<" ";

        for(p=3;p*p<=n;p+=2){
            cnt=0;
            while(n%p==0){
                cnt++;
                n/=p;
            }
            if(cnt) cout<<p<<"^"<<cnt<<" ";
        }
        if(n>1) cout<<n<<"^1"<<" ";
        cout<<endl;
    }
    return 0;
}
