#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {5,69,4,2,7,1};
    sort(v.begin(),v.end());
    for(int &x: v) cout<<x<<" ";
}
