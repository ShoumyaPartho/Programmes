#include<iostream>
using namespace std;

int main(){
    int len;

    while(cin>>len){
        if(len==0) break;

        char s[len+10];
        cin>>s;

        int dis=-1,tdis=0,r=-1,d=-1;

        for(int i=0;i<len;i++){
            if(s[i]=='Z') {
                dis=0;
                break;
            }
            else if(s[i]=='R'){
                r=i;
                if(d!=-1){
                    tdis=i-d;
                    if(tdis<dis || dis<0) dis=tdis;
                }
            }
            else if(s[i]=='D'){
                d=i;
                if(r!=-1){
                    tdis=i-r;
                    if(tdis<dis || dis<0) dis=tdis;
                }
            }
        }
        cout<<dis<<endl;
    }
    return 0;
}
