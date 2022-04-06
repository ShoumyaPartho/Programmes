#include<iostream>
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

  long long int t,w,h,n,cnt;
  cin>>t;

  while(t--){
    cin>>w>>h>>n;
    cnt=1;

    while(!(w&1)){
      cnt+=cnt;
      w>>=1;
    }
    while(!(h&1)){
      cnt+=cnt;
      h>>=1;
    }
    if(cnt>=n) cout<<"YES\n";
    else cout<<"NO\n";

  }

  return 0;
}
