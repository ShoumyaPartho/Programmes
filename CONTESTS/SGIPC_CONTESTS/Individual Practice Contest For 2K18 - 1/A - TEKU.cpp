#include<iostream>
#include<string>
using namespace std;

int main(){

    int tc,t,len;
    string str,s,f,l;
    cin>>tc;
    getline(cin,s);
    for(t=1;t<=tc;t++){

        getline(cin,str);
        f='a'-'A'+str[0];
        if(str.length()==1){
            cout<<str<<"ay"<<endl;
            continue;
        }
        str[1]='A'-'a'+str[1];
        cout<<l;
        for(int i=1;i< str.length();){
            for(int j=i;;j++){
                if(str[j]==' '){
                    cout<<f<<"ay"<<" ";
                    i=j+2;
                    f=str[j+1];
                    break;
                }
                else if(j+1==str.length()){
                    cout<<str[j]<<f<<"ay"<<endl;
                    i=j+1;
                    break;
                }
                else{
                    cout<<str[j];
                }
            }
        }
    }
    return 0;
}
