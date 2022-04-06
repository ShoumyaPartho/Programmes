#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int tc,n,ara[100]={0},cnt;
  cin>>tc;
  while(tc--){
    cin>>n;cnt=0;
    for(int i=0;i<n;i++) cin>>ara[i];

    if(n==1) {
      cout<<"YES"<<endl;
      continue;
    }
    sort(ara,ara+n);
    for(int i=1;i<n && cnt<2;i++){
      if((ara[i]-ara[i-1])<=1) ara[i-1]=0;
      else cnt++;
    }
    //cout<<"CNT "<<cnt<<endl;
    if(cnt>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  return 0;
}
