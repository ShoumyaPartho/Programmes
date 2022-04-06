#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
  int tc,len;
  string s;
  cin>>tc;
  getchar();

  while(tc--){
    cin>>s;
    len=s.length();

    while(s[len-1]=='0'){
      s.pop_back();
      len--;
    }

    for(int i=0;i<len/2;i++) swap(s[i],s[len-i-1]);
    cout<<s<<endl;
    s.clear();
  }

  return 0;
}
