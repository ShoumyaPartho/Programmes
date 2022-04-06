#include<iostream>
#include<string>
#include<map>
using namespace std;

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif // ONLINE_JUDGE
}

int main(){
  fastIO();

  int tc,n,num,cnt;
  cin>>tc;

  while(tc--){
    cin>>n;
    map<string, int> mp0,mp1,mp0Check,mp1Check;
    string s;
    cnt=0;

    while(n--){
      cin>>s>>num;

      if(num==0){
        auto it=mp0.find(s);

        if(it==mp0.end()){
          mp0.insert({s,num});
          mp0Check.insert({s,1});
        }
        else mp0Check[s]++;
      }

      else if(num==1){
        auto it=mp1.find(s);

        if(it==mp1.end()){
          mp1.insert({s,num});
          mp1Check.insert({s,1});
        }
        else mp1Check[s]++;
      }
    }

    for(auto it1=mp0.begin();it1!=mp0.end();it1++){
      auto it2=mp1.find(it1->first);

      if(it2==mp1.end()) cnt+=mp0Check[it1->first];
      else {
        cnt+=max((mp0Check[it1->first]),(mp1Check[it2->first]));
        it2->second=-1;
      }
    }

    for(auto it2=mp1.begin();it2!=mp1.end();it2++){
      if(it2->second != -1) cnt+=mp1Check[it2->first];
    }
    cout<<cnt<<"\n";
  }
  return 0;
}
