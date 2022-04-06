#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ara[n],ans=0;
        for(int i=0;i<n;i++){
            cin>>ara[i];
            ans=ans^(2*ara[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
