#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
  //freopen("in.txt","r",stdin);
  //freopen("out.txt","w",stdout);

  int tc,ara1[30],ara2[30],len,i;
  bool flag;
  string s;
  cin>>tc;
  //getchar();

  while(tc--){
    cin>>s;
    //cout<<s<<"\n";
    for(i=0;i<30;i++) {ara1[i]=ara2[i]=0;}
    len=s.length();
    //cout<<len<<"\n";
    flag= false;
    if(len==1) flag=true;

    for(i=0;i<len>>1;i++) ara1[(int)(s[i]-'a')+1]++;

    if(len%2==1) i++;

    for(;i<len;i++) ara2[(int)(s[i]-'a')+1]++;

    for(i=1;i<27;i++){
      if(ara1[i]!=ara2[i]){
        flag=true;
        break;
      }
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";

    s.clear();
  }
  return 0;
}
