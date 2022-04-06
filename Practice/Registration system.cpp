#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
  map<string,int> mp;
  string s;
  int n;
  cin>>n;

  while(n--){
    cin>>s;
    auto it=mp.find(s);
    if(it==mp.end()) {
      mp.insert({s,0});
      cout<<"OK"<<endl;
    }
    else {
      it->second++;
      cout<<it->first<<it->second<<endl;
    }
    s.clear();
  }
  return 0;
}
