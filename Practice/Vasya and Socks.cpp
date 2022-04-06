#include<iostream>
using namespace std;

int main(){
    int n,m,t1=0,t2,day;
    cin>>n>>m;
    //t1=n;
    day=n;
    //day+=(n/m);
    while(1){
        t2=day%m;
        t2=day-t2;
        day+=((day-t1)/m);
        t1=t2;
        if((day-t1)<m) break;
    }
    //if(day%m==0) day++;
    cout<<day<<endl;

    return 0;
}
