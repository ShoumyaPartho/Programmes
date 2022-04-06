#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

void vectordemo(){
    vector<int> v;
    v.push_back(69);
    v.push_back(35);
    v.push_back(45);
    v.push_back(44);
    v.push_back(1);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++) {
        cout<<*it<<endl;
    }
}

void setdemo(){
    set<int> s;
    s.insert(69);
    s.insert(45);
    s.insert(100);
    s.insert(-1);
    s.insert(-69);
    set<int>::iterator it=s.lower_bound(-1);
    set<int>::iterator it2=s.upper_bound(-1);
    //set<int>::iterator it2=s.upper_bound(-1);
    cout<<*it<<" "<<*it2<<endl;

    /*for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }*/
}

int main(){
    //vectordemo();
    setdemo();
}
