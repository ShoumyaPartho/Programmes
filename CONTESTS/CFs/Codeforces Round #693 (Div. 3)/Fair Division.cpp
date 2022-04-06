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

  int tc,n,sum,temp,one,two,rtwo,rone,tempSum,t1,t2;
  cin>>tc;

  while(tc--){
    cin>>n;
    one=two=sum=tempSum=rtwo=rone=temp=t1=t2=0;

    for(auto i=0;i<n;i++){
      cin>>temp;
      if(temp==1) one++;
      else if(temp==2) two++;
      sum+=temp;
    }

    /*if(sum&1) cout<<"NO\n";
    else{
      tempSum=sum>>1;
      rtwo=tempSum>>1,rone=tempSum%2;
      if(two>=rtwo){
          two-=rtwo;
          t1+=(rtwo*2);
      }
      else {
        rtwo-=two;
        two=0;
        t1+=(two*2);
      }
      if(one>=rone){
        one-=rone;
        t1+=rone;
      }
      else{
        rone-=one;
        one=0;
        t1+=one;
      }
      t2=(two*2)+one;
      if(t1==t2 && t1==tempSum) cout<<"YES\n";
      else cout<<"NO\n";
    }*/

    if(!(one&1) && !(two&1)) cout<<"YES\n";
    else if(two&1){
      if(one>=2 && !(one&1))  cout<<"YES\n";
      else cout<<"NO\n";
    }
    else cout<<"NO\n";
  }

  return 0;
}
