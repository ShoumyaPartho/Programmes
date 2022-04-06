#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  //freopen("in.txt","r",stdin);

  long long int tc,k,d0,d1,d2,d3,d4,d5,d6,s,tot,cycle,temp;

  cin>>tc;

  while(tc--){
    cin>>k>>d0>>d1;
    tot=0;
    s=d0+d1;
    d2=s%10;
    d3=(2*s)%10;
    d4=(4*s)%10;
    d5=(8*s)%10;
    d6=(6*s)%10;
    temp=d3+d4+d5+d6;
    cycle=(k-3)/4;

    tot=s+d2+(cycle*temp);

    temp=3+(cycle*4)+1;

    for(int i=2;temp<=k;i*=2,temp++) tot+=((i*s)%10);

    if(tot%3==0) cout<<"YES\n";

    else cout<<"NO\n";
  }

  return 0;
}
