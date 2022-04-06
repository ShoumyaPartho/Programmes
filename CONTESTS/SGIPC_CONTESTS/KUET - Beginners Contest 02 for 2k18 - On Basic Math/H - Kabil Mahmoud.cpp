#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0;i<n-2;i++) {
        if((ara[i]+ara[i+1])>ara[i+2]){
            a=1;
            break;
        }
        else a=0;
    }
    if(a) cout<<"YES"<<endl;
    else if(!a) cout<<"NO"<<endl;

    return 0;
}
