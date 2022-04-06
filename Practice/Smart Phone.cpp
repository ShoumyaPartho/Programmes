#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  //freopen("in.txt","r",stdin);
  long long int n,maxRev=0;
  cin>>n;
  long long int ara[n];
  for(long long int i=0;i<n;i++) cin>>ara[i];
  sort(ara,ara+n);

  for(long long int i=0;i<n;i++) maxRev=max(ara[i]*(n-i),maxRev);

  cout<<maxRev<<"\n";

  return 0;
}
