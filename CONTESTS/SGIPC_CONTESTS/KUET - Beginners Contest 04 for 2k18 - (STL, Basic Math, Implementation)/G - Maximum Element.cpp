#include<iostream>
#include<stack>
using namespace std;

int main(){
    int t,query,x,temp;
    stack<int>st,mx;
    cin>>t;

    while(t--){
        cin>>query;

        if(query==1){
            cin>>x;
            st.push(x);

            if(!mx.empty()){
                if(x>=mx.top()) mx.push(x);
            }
            else mx.push(x);
        }

        else if(query==2){
            if(st.top()==mx.top()) mx.pop();
            st.pop();
        }

        else if(query==3) cout<<mx.top()<<endl;
    }
    return 0;
}
