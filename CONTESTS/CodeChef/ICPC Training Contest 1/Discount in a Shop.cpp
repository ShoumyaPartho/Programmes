#include<iostream>
#include<string>
using namespace std;

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif // ONLINE_JUDGE
}

long long int val(string str){
  long long int mul=1,num=0;

  for(int i=str.length()-1;i>=0;i--){
    num+=((str[i]-'0')*mul);
    mul*=10;
  }
  return num;
}

int main(){
  fastIO();

  long long int tc,temp,mini;
  cin>>tc;

  while(tc--){
    string s,tempStr="";
    cin>>s;
    mini=1e11;

    for(int i=0;i<s.length();i++){
      for(int j=0;j<s.length();j++){
        if(j!=i)
          tempStr+=s[j];
      }
      temp=val(tempStr);
      //cout<<"Temp: "<<temp<<"\n";
      mini=min(temp,mini);
      tempStr.clear();
    }
    cout<<mini<<"\n";

    s.clear();
    tempStr.clear();
  }
  return 0;
}
