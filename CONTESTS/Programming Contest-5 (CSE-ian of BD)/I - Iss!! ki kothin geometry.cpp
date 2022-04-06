#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    double d1,d2,d3;
    bool check;
    cin>>a>>b>>c>>d>>e>>f;
    if(a==c && a==e) check=true;
    else if(b==d && b==f) check =true;
    else check=false;

    if(check) cout<<"YES"<<endl;
    else if(!check) {
        if(a!=c) d1=(double)((double)(b-d)/(double)(a-c));
        else if(a==c) d1=-5.0;
        if(c!=e) d2=(double)((double)(d-f)/(double)(c-e));
        else if(c==e) d2=-5.0;
        if(d1==d2) cout<<"YES"<<endl;
        else if(d1!=d2) cout<<"NO"<<endl;
    }

    return 0;
}
