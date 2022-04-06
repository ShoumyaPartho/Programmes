#include<iostream>
#include<vector>
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

  int t,n,temp,maxi;

  cin>>t;

  while(t--){
    cin>>n;

    vector<int> v(n+5,0);
    maxi=0;

    for(int i=1;i<=n;i++){
      cin>>temp;
      v[i]+=temp;
      if(v[i]+i<=n) v[v[i]+i]+=temp;
    }
    for(int i=1;i<=n;i++){
      cout<<v[i]<<" ";
      maxi=max(maxi,v[i]);
    }
    cout<<maxi<<"\n";
  }
  return 0;
}
