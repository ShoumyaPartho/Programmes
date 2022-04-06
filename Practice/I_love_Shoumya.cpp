#include<iostream>
using namespace std;

int main(){
    int n,mn,mx,amaz=0;
    cin>>n;
    int ara[n];
    cin>>ara[0];
    mn=mx=ara[0];

    for(int i=1;i<n;i++){
        cin>>ara[i];
        if(ara[i]>mx){
            mx=ara[i];
            amaz++;
        }
        else if(ara[i]<mn){
            mn=ara[i];
            amaz++;
        }
    }
    cout<<amaz<<endl;
    return 0;
}
