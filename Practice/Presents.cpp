#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a1[n],a2[n];

    for(i=0;i<n;i++){
        cin>>a1[i];
        a2[a1[i]-1]=i+1;
    }
    for(i=0;i<n;i++) cout<<a2[i]<<" ";

    return 0;
}
