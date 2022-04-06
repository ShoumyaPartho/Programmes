#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
    int grpnum,temp,check=0;
    while(scanf("%d",&grpnum)!=EOF){
        getchar();
        string name[grpnum];
        map<string,int> mp;
        temp=grpnum;
        int cnt=0;
        while(temp--){
            string s;
            cin>>s;
            getchar();
            mp.insert({s,0});
            name[cnt]=s;
            cnt++;
        }
        temp=grpnum;
        while(temp--){
            string s;
            int gift,val,frnd;
            cin>>s>>gift>>frnd;
            if(frnd!=0) {
                val=gift/frnd;
                mp[s]-=(val*frnd);
            }
            else {
                val=gift;
                //mp[s]-=(val);
            }
            while(frnd--){
                string st;
                cin>>st;
                mp[st]+=val;
            }
        }
        if(check) cout<<endl;
        for(cnt=0;cnt<grpnum;cnt++)
            cout<<name[cnt]<<" "<<mp[name[cnt]]<<endl;
        check=1;
    }
    return 0;
}
