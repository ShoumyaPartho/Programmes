
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    int n,m,x,cnt;
    set<long long int>st1,st2;
    while(1){
        cin>>n;
        if(n==0){
            cin>>m;
            if(m==0) break;
        }
        cnt=0;
        cin>>m;
        for(int i=0;i<n;i++){
            cin>>x;
            st1.insert(x);
        }
        for(int i=0;i<m;i++){
            cin>>x;
            st2.insert(x);
        }
        if(n<m){
            for(auto it=st1.begin();it!=st1.end();it++){
                if(st2.find(*it)!=st2.end()) cnt++;
            }
        }
        else {
            for(auto it=st2.begin();it!=st2.end();it++){
                if(st1.find(*it)!=st1.end()) cnt++;
            }
        }
        cout<<cnt<<endl;
        st1.clear();
        st2.clear();
    }
    return 0;
}
