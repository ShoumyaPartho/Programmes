#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int j=1;j<=t;j++){
        getchar();
        cin>>n;
        int stud,sum=0;
        for(int i=0;i<n;i++){
            cin>>stud;
            if(stud>=0) sum+=stud;
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}
