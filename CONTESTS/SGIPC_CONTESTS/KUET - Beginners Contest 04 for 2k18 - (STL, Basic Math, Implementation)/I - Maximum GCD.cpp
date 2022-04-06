#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    unsigned int tc,gcd,tgcd,cnt,n,a=0;
    string s;
    vector<unsigned int> v;
    cin>>tc;
    while(tc--){
        n=0;
        if(a==0) {
            getchar();
            a++;
        }
        getline(cin,s);
        cnt=0;
        for(int i=0;i<s.length();i++){
            n=n*10;
            n=n+((int) (s[i]-'0'));
            if(s[i+1]==' ' || s[i+1]=='\0'){
                v.push_back(n);
                n=0;
                cnt++;
                i++;
            }
        }
        gcd=1;
        for(int i=0;i<cnt-1;i++){
            for(int j=i+1;j<cnt;j++){
                tgcd=__gcd(v[i],v[j]);
                if(gcd<tgcd) gcd=tgcd;
            }
        }
        cout<<gcd<<endl;
        s.clear();
        v.clear();
    }
}
