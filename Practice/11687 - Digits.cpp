#include<iostream>
#include<string>
using namespace std;

int main(){
    while(1){
        string s;
        cin>>s;
        if(s=="END") break;

        int num=0,cnt=1,current,temp;
        num=s.size();
        if(num==1 && s=="1") {
            cout<<1<<endl;
            continue;
        }

        while(1){
            cnt++;
            temp=num;
            current=0;
            while(temp){
                current++;
                temp/=10;
            }
            //cout<<cnt<<" "<<num<<" "<<current<<endl;
            if(current==num) break;
            else num=current;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
