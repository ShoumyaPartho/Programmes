#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n, ara[110],temp,res;
  cin>>n;

  //taking inputs
  for(int i=0;i<n;i++) cin>>ara[i];
  temp=ara[0];
  sort(ara+1,ara+n);

  while(ara[0]<=ara[n-1]){
    ara[0]++;
    ara[n-1]--;

    sort(ara+1,ara+n);
  }
  res=ara[0]-temp;

  cout<<res<<endl;

  return 0;
}
