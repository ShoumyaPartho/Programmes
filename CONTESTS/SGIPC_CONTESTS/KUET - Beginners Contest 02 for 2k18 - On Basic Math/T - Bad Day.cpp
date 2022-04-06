#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

bool isleap(int y){
    if(y%4==0){
        if(y%100==0){
            if(y%400==0) return true;
            else return false;
        }
        else return true;
    }
    else return false;
}

int main(){
    string m1,m2;
    long long int d1,d2,y1,y2,tc,t,leap,check,temp;
    cin>>t;

    for(tc=1;tc<=t;tc++){
        cin>>m1>>d1;
        getchar();
        cin>>y1;
        getchar();
        cin>>m2>>d2;
        getchar();
        cin>>y2;
        leap=0;

        leap=(y2/4- y2/100 + y2/400) - (y1/4- y1/100 + y1/400);

        if(isleap(y1)) {
            if(m1[0]=='F' || (m1[0]=='J' && m1[1]=='a')) leap++;
        }
        if(isleap(y2)){
            if((m2[0]=='F' && d2<29) || (m2[0]=='J' && m2[1]=='a')) leap--;
        }
        cout<<"Case "<<tc<<": "<<leap<<endl;
    }
    return 0;
}
