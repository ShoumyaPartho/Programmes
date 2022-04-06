#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int tc,q,x;
    cin>>tc;
    set<int>st;
    set<int>::iterator it;
    while(tc--){
        cin>>q>>x;
        if(q==1) st.insert(x);
        else if(q==2) {
            it=st.find(x);
            if(it!=st.end()) st.erase(x);
        }
        else if(q==3) {
            it=st.find(x);
            if(it!=st.end()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
