#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int ara[]={5,3,4,6,7,1,9,0,2,8};
    vector<int> v(ara,ara+10);
    sort(v.begin(),v.end());
    vector<int>::iterator p=lower_bound(v.begin(),v.end(),6);
    vector<int>::iterator q=upper_bound(v.begin(),v.end(),6);
    cout<<p-v.begin()<<endl;
    cout<<q-v.begin()<<endl;

    return 0;
}
