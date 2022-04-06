#include<iostream>
#include<vector>
#include<queue>
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

  int tc,n,x,sz,temp;
  long long int sum;
  cin>>tc;

  while(tc--){
    cin>>n>>x;
    vector<int> ara(n);
    queue<int>q;
    sum=0;

    for(int i=0;i<n;i++) {
        cin>>ara[i];
        q.push(ara[i]);
    }

    /*for(int i=0;;i++){
      if(ara[i]%x==0){
        for(int j=1;j<=x;j++) ara.push_back(ara[i]/x);
      }
      else break;
    }
    sum=0,sz=ara.size();

    for(int i=0;i<sz;i++) sum+=ara[i];*/

    while(!q.empty()){
      temp=q.front();

      q.pop();
      if(temp%x==0){
        sum+=temp;
        for(int j=1;j<=x;j++) q.push(temp/x);
      }
      else {
        sum+=temp;
        while(!q.empty()){
          temp=q.front();
          sum+=temp;
          q.pop();
        }
        break;
      }
    }

    cout<<sum<<"\n";
  }
  return 0;
}
