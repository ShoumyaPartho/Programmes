#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    int tc,n;
    cin>>tc;
    while(tc--) {
        cin>>n;
        string str,left="LEFT",right="RIGHT",same="SAME",temp;
        int ara[n],pos=0,num;
        for(int i=0;i<n;i++) ara[i]=0;
        for(int i=0;i<n;i++){
            cin>>str;
            //cout<<str;
            if(str==left) {
                pos--;
                ara[i]= -1;
            }
            else if(str==right){
                pos++;
                ara[i]=1;
            }
            else if(str==same) {
                cin>>temp>>num;
                if(ara[num-1]==-1){
                    pos--;
                    ara[i]=-1;
                }
                else if(ara[num-1]==1){
                    ara[i]=1;
                    pos++;
                }
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}
