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

  int tc,n,k,cur,needed;
  cin>>tc;

  while(tc--){
    cin>>n>>k;
    cur=(n+2-1)/2,needed=k;

    int ara[n+5];

    for(int i=1;i<=n;i++) ara[i]= (i%2==0? -1*i:i);

    if(cur<k){
      for(int i=n;;i--){
        if(ara[i]<0) {
          ara[i]*=-1;
          cur++;
          if(cur==k) break;
        }
      }
    }
    else if(k<cur){
      for(int i=n;;i--){
        if(ara[i]>0) {
          ara[i]*=-1;
          cur--;
          if(cur==k) break;
        }
      }
    }
    for(int i=1;i<=n;i++) cout<<ara[i]<<" \n"[i==n];
  }
  return 0;
}
