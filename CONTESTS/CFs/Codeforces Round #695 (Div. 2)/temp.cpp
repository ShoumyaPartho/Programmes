#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(10,4);
    //for(int i=0;i<10;i++) v.push_back(i);

    for(auto i: v) cout<<v[i]<<"\n";
    return 0;
}
