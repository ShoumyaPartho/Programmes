#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
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

  int tc,n,temp;
  cin>>tc;

  while(tc--){
    cin>>n;
    deque<long long int>alice, bob;
    int alTurn=0, boTurn=0,al=0,bo=0,t1=0,t2=0;

    for(int i=0;i<n;i++){
      cin>>temp;
      if(temp%2==0) alice.push_back(temp);
      else bob.push_back(temp);
    }

    sort(alice.begin(),alice.end(),greater<long long int>());
    sort(bob.begin(),bob.end(),greater<long long int>());

    if(n%2==0){
      alTurn=n/2;
      boTurn=n/2;
    }
    else{
      alTurn=n/2+1;
      boTurn=n/2;
    }
    while(1){
      if(alTurn){
        /*if(!alice.empty()){
          al+=alice.front();
          alice.pop_front();
        }
        else if(!bob.empty()){
          bob.pop_front();
        }*/
        if(!alice.empty())t1=alice[0];
        if(!bob.empty()) t2=bob[0];
        else t2=-1;

        if(t1>t2){
          al+=alice.front();
          alice.pop_front();
        }
        else  bob.pop_front();
        alTurn--;
      }
      if(boTurn){
        /*if(!bob.empty()){
          bo+=bob.front();
          bob.pop_front();
        }
        else if(!alice.empty()){
          alice.pop_front();
        }*/
        if(!bob.empty()) t1=bob[0];
        if(!alice.empty()) t2=alice[0];
        else t2=-1;

        if(t1>t2){
          bo+=bob.front();
          bob.pop_front();
        }
        else  alice.pop_front();
        boTurn--;
      }
      if(!alTurn && !boTurn) break;
    }
    if(bo>al) cout<<"Bob\n";
    else if(al>bo)cout<<"Alice\n";
    else cout<<"Tie\n";
  }
  return 0;
}
