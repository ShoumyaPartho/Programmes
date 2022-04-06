//#include<iostream>
//#include<cstdio>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
  //freopen("in.txt","r",stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc,n,maxCar;
  cin>>tc;

  while(tc--){
    cin>>n;
    vector<int> v(n);
    maxCar=1;
    cin>>v[0];
    for(int i=1;i<n;i++){
      cin>>v[i];
      if(v[i-1]>=v[i]) maxCar++;
      else v[i]=v[i-1];
    }
    cout<<maxCar<<"\n";
    v.clear();
  }
  return 0;
}
