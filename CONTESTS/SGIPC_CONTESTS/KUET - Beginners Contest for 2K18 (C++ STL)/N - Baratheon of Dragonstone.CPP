#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    string s,temp;
    set<string> st;
    int sz;

    while(cin>>s){
        sz=s.size();
        temp="";

        for(int i=0;i<sz;i++){
            char c=tolower(s[i]);

            if(isalpha(c)) temp=temp+c;
            else if(temp!="") {
                st.insert(temp);
                temp="";
            }
        }
        if(temp!="") st.insert(temp);
    }
    for(auto it=st.begin();it!=st.end();it++) cout<<*it<<endl;

    return 0;
}
