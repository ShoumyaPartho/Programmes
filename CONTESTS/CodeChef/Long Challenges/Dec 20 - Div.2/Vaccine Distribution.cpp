#include<iostream>
using namespace std;

int main(){
  int tc,n,d,temp,r;
  cin>>tc;

  while(tc--){
    cin>>n>>d;
    r=0;
    for(int i=0;i<n;i++) {
        cin>>temp;
        if(temp<=9 or temp>=80) r++;
    }

    if(d==1) cout<<n<<endl;
    else if(n<=d) {
      if(r==0) cout<<1<<endl;
      else cout<<2<<endl;
    }

    else{
      cout<<((r+d-1)/d)+((n-r+d-1)/d)<<endl;
    }
  }
  return 0;
}
