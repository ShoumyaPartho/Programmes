#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    map<int,string> mp;
    map<int,string>:: iterator it;
    vector<int> v;
    while(n--){
        cin.ignore();
        string s;
        getline(cin,s);
        //cout<<s<<endl;
        int len=s.size(),num=0,cnt=0;

        for(int i=0;i<len;i++){
            num*=10;
            num+=(s[i]-'0');

            if((i+1)==len || s[i+1]==' '){
                v.push_back(num);
                mp[num]="";
                if(num) cnt++;
                num=0;
                i++;
            }
        }

        for(int i=0;i<cnt;i++){
            cin>>s;
            cin.ignore();
            mp[v[i]]=s;
        }
        for(it=mp.begin();it!=mp.end();it++) cout<<it->second<<endl;

        if(n) cout<<endl;

        mp.clear();
        v.clear();
    }
    return 0;
}
