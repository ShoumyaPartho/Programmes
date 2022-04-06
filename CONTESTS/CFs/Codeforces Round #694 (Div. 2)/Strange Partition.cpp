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

  long long int tc,n,x,temp,a,b;
  cin>>tc;

  while(tc--){
    cin>>n>>x;
    a=0,b=0;

    for(int i=0;i<n;i++){
      cin>>temp;
      a+=temp;
      b+=(temp+x-1)/x;
    }
    a=(a+x-1)/x;
    cout<<min(a,b)<<" "<<max(a,b)<<"\n";
  }
  return 0;
}
