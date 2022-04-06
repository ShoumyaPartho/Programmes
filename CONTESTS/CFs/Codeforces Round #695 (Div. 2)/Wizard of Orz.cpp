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

  int tc,n,num,t,mid;
  cin>>tc;

  while(tc--){
    cin>>n;

    //int ara[n]={0};
    if(n<=2){
        for(int j=9;j>=(10-n);j--) cout<<j;
    }
    else{
      num=9,t=-1,mid=(n+2-1)/2;
      for(int i=1;i<=n;i++){
        cout<<num;
        if(i==mid) t=(-t);
        num+=t;
        if(num<0) num=9;
        else num%=10;
      }
    }
    cout<<"\n";
  }
  return 0;
}
