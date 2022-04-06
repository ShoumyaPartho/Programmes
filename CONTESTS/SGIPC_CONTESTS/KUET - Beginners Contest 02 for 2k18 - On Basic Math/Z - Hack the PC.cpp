#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int tc,t,temp,i,j,init,check;
    char n1[50],n2[50],n3[50];
    cin>>t;

    for(tc=1;tc<=t;tc++) {
        cin>>n1>>n2;
        for(i=0;i<35;i++) {
            if(i==8 || i==17 || i==26) n3[i]='.';
            else n3[i]='0';
        }
        n3[35]='\0';
        temp=0;
        init=7;
        for(i=0;i<strlen(n1);i++){
            if(n1[i]=='.') continue;
            temp*=10;
            temp+=((int)(n1[i]-'0'));
            if(n1[i+1]=='.' || i==(strlen(n1)-1)){
                j=init;
                while(temp){
                    n3[j]=(char)((temp%2)+'0');
                    j--;
                    temp/=2;
                }
                init+=9;
            }
        }
        for(i=0;i<35;i++) {
            if(n2[i]!=n3[i]) {
                check=0;
                cout<<"Case "<<tc<<": No"<<endl;
                break;
            }
            else check=1;
        }
        if(check) cout<<"Case "<<tc<<": Yes"<<endl;
    }
    return 0;
}
