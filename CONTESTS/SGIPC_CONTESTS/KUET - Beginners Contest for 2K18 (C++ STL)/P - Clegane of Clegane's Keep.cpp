#include<iostream>
#include<deque>

using namespace std;

int main(){
    int t,n,k,i;
    cin>>t;
    while(t--){
        deque<int> dq;
        cin>>n>>k;
        int ara[n];
        for(i=0;i<n;i++) cin>>ara[i];

        for(i=0;i<k;i++){
            if(dq.empty() || (ara[dq.back()]>=ara[i])) dq.push_back(i);
            else{
                while(!dq.empty() && ara[dq.back()]<ara[i]) dq.pop_back();
                dq.push_back(i);
            }
        }
        cout<<ara[dq.front()];

        while(i<n){
            if(dq.front()<=i-k) dq.pop_front();
            if(dq.empty() || (ara[dq.back()]>=ara[i])) dq.push_back(i);
            else{
                while(!dq.empty() && ara[dq.back()]<ara[i]) dq.pop_back();
                dq.push_back(i);
            }
            cout<<" "<<ara[dq.front()];
            i++;
        }
        cout<<endl;
    }
    return 0;
}
