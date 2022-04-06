#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  cin>>s;
  int len=s.length();
  //cout<<len<<endl;
  if(s[0]=='-'){
    if(s[len-1]<s[len-2]) swap(s[len-1],s[len-2]);
    len--;
  }
  if(len==2 && s[0]=='-' && s[1]=='0') cout<<0;
  else {
      for(int i=0;i<len;i++) cout<<s[i];
  }
  cout<<endl;
}
