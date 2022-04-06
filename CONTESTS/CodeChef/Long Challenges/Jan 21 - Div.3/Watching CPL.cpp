#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif // ONLINE_JUDGE
}

int main(){
  //fastIO();

  int t,n,k;
  cin>>t;
  //cout<<"Hello\n";

  while(t--){
    cin>>n>>k;
    //cout<<"Hello\n";
    int ara[n],sumMike=0,sumTracy=0,totSum=0,i=0,check=-1,cnt=0;
    for(i=0;i<n;i++) {
      cin>>ara[i];
      totSum+=ara[i];
    }
    if(totSum<(k<<1)) {
      cout<<"-1\n";
      continue;
    }

    i=0,sort(ara,ara+n,greater<int>());
    //cout<<"Hello\n";

    while(i<n){
      if((sumMike+ara[i]) <k){
        if(check!=-1 ) {
          if(((totSum-ara[check])>=k))
            break;
          else check=-1;
        }
        sumMike+=ara[i],totSum-=ara[i],cnt++;
        ara[i]=-1,i++;
      }
      else if((sumMike+ara[i]) == k){
        sumMike+=ara[i],totSum-=ara[i],cnt++;
        ara[i]=-1,i=0,check=-1;
        break;
      }
      else if((sumMike+ara[i]) > k){
        check=i,i++;
      }
      //cout<<i<<" ";
    }
    if(sumMike<k && check!=-1){
      sumMike+=ara[check],totSum-=ara[check],cnt++;
      ara[check]=-1,i=0,check=-1;
      //cout<<"sumMike: "<<sumMike;
    }

    if(totSum<k){
      cout<<"-1\n";
      continue;
    }

    while(i<n){
      if(ara[i]!=-1){
        sumTracy+=ara[i],cnt++;
        //cout<<"sumMike: "<<sumMike;
        if(sumTracy>=k)break;
      }
      i++;
    }
    cout<<cnt<<"\n";
  }
  return 0;
}
