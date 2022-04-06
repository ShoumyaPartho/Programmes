#include<iostream>
using namespace std;

int main(){
    int k,m;
    while(cin>>k){
        if(!k) break;
        cin>>m;
        int TakenCourses[k];
        for(int i=0;i<k;i++) cin>>TakenCourses[i];
        int c,r;
        bool check=true;
        for(int i=0;i<m;i++){
            cin>>c>>r;
            int Courses[c];

            for(int j=0;j<c;j++) cin>>Courses[j];
            int cnt=0;
            for(int j=0;j<c;j++){
                for(int a=0;a<k;a++){
                    if(TakenCourses[a]==Courses[j]){
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt<r) check=false;
        }
        if(check) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
