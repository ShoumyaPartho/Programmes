#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int t,n,temp;
    cin>>t;
    while(t--) {
        int ara[10];
        for(int i=0;i<10;i++) ara[i]=0;
        cin>>n;
        for(int i=1;i<=n;i++) {
            if(i<10) ara[i]++;
            else{
                temp=i;
                while(temp!=0){
                    ara[temp%10]++;
                    temp/=10;
                }
            }
        }
        for(int i=0;i<10;i++) {
            cout<<ara[i];
            if(i==9) cout<<endl;
            else cout<<" ";
        }
    }
}
