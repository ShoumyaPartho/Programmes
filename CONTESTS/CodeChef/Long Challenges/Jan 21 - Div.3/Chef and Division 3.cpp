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
  int tc,n,k,d,temp,sum;

  fastIO();

  cin>>tc;

  while(tc--){
    cin>>n>>k>>d;
    sum=0;

    for(int i=0;i<n;i++){
      cin>>temp;
      sum+=temp;
    }
    cout<<min(sum/k,d)<<"\n";
  }
  return 0;
}
