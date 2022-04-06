#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int tc,n,sum,i,sqrtn;
    cin>>tc;

    while(tc--){
        sum=1;
        cin>>n;
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        sqrtn=sqrt(n);
        for(i=2;i<sqrtn;i++){
            if(n%i==0) {
                sum+=i;
                if((n/i)!=i)sum+=(n/i);
            }
        }
        if(n%sqrtn==0 && sqrtn!=1) {
            if((sqrtn*sqrtn)==n) sum+=sqrtn;
            else{
                sum+=sqrtn;
                sum+=(n/sqrtn);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
