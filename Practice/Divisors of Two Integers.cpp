#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,x=0,y,temp;
    cin>>n;
    int lst[n];
    for(int i=0;i<n;i++) cin>>lst[i];
    sort(lst,lst+n);
    y=lst[n-1];
    for(int i=0;i<n;i++) {
        if(lst[i] && y%lst[i]==0) {
            temp=lst[i];
            lst[i]=0;
            if(lst[i+1]==temp) i++;
        }
    }
    for(int i=0;i<n;i++){
        if(lst[i]>x) x=lst[i];
    }
    cout<<y<<" "<<x<<endl;

    return 0;
}

