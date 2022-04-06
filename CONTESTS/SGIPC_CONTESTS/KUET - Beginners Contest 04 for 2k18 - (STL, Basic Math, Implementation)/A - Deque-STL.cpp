#include<iostream>
#include<queue>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k,i;
        cin>>n>>k;
        int ara[n];
        deque<int>dq;
        for(i=0;i<n;i++)
            cin>>ara[i];

        for(i=0;i<k;i++){
            if(dq.empty() || (ara[dq.back()]>=ara[i]))
                dq.push_back(i);
            else{
                while(!dq.empty() &&  (ara[dq.back()]<ara[i]))
                    dq.pop_back();
                dq.push_back(i);
            }
        }
        cout<<ara[dq.front()];

        while(i<n){
            if(dq.front()<=(i-k)) dq.pop_front();
            if(dq.empty() || (ara[dq.back()]>=ara[i]))
                dq.push_back(i);
            else{
                while(!dq.empty() &&  (ara[dq.back()]<ara[i]))
                    dq.pop_back();
                dq.push_back(i);
            }
            cout<<" "<<ara[dq.front()];
            i++;
        }
        cout<<endl;
    }
    return 0;
}
