#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        stack<char>st;
        string s;
        cin>>s;

        if(s.size()%2==1){
            cout<<"NO"<<endl;
            continue;
        }

        bool check=true;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else if(s[i]==')') {
                if(st.empty() || st.top()!='(') {
                    check=false;
                    break;
                }
                else st.pop();
            }
            else if(s[i]=='}') {
                if(st.empty() || st.top()!='{') {
                    check=false;
                    break;
                }
                else st.pop();
            }
            else if(s[i]==']') {
                if(st.empty() || st.top()!='[') {
                    check=false;
                    break;
                }
                else st.pop();
            }
        }

        if(check && st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
