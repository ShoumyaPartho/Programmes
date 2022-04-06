#include<iostream>
using namespace std;

int main(){
    int n,k,p=0,time,t=0;
    cin>>n>>k;
    time=240-k;

    for(int i=1;i<=n;i++){
        if((t+(i*5))<=time){
            t+=i*5;
            p++;
        }
        else break;
    }
    cout<<p<<endl;
}
