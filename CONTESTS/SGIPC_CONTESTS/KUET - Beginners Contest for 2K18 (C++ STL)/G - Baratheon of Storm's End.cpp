#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        map<string,int>mp;
        string str[5];
        int mnum=-1,cnt=0;
        for(int i=0;i<n;i++){
            cin>>str[0]>>str[1]>>str[2]>>str[3]>>str[4];
            sort(str,str+5);
            string line;
            for(int j=0;j<5;j++) line+=str[j];
            if(!mp.count(line)){
                mp[line]=1;
                mnum=max(mnum,1);
            }
            else{
                mp[line]++;
                int m=mp[line];
                mnum=max(m,mnum);
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==mnum) cnt+=it->second;
        }
        cout<<cnt<<endl;
        mp.clear();
    }
    return 0;
}
