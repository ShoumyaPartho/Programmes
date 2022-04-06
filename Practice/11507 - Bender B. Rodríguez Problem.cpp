#include<iostream>
using namespace std;

int main(){
    int l;

    while(cin>>l){
        if(!l) break;
        char psign='+',pstate='x',isign,istate;
        for(int i=1;i<l;i++){
            cin>>isign>>istate;

            if(isign=='+' && istate=='y'){
                if(psign=='+' && pstate=='x') psign='+',pstate='y';
                else if(psign=='-' && pstate=='x') psign='-',pstate='y';
                else if(psign=='+' && pstate=='y') psign='-',pstate='x';
                else if(psign=='-' && pstate=='y') psign='+',pstate='x';
                else if(psign=='+' && pstate=='z') psign='+',pstate='z';
                else if(psign=='-' && pstate=='z') psign='-',pstate='z';
            }
            else if(isign=='-' && istate=='y'){
                if(psign=='+' && pstate=='x') psign='-',pstate='y';
                else if(psign=='-' && pstate=='x') psign='+',pstate='y';
                else if(psign=='+' && pstate=='y') psign='+',pstate='x';
                else if(psign=='-' && pstate=='y') psign='-',pstate='x';
                else if(psign=='+' && pstate=='z') psign='+',pstate='z';
                else if(psign=='-' && pstate=='z') psign='-',pstate='z';
            }
            else if(isign=='+' && istate=='z'){
                if(psign=='+' && pstate=='x') psign='+',pstate='z';
                else if(psign=='-' && pstate=='x') psign='-',pstate='z';
                else if(psign=='+' && pstate=='y') psign='+',pstate='y';
                else if(psign=='-' && pstate=='y') psign='-',pstate='y';
                else if(psign=='+' && pstate=='z') psign='-',pstate='x';
                else if(psign=='-' && pstate=='z') psign='+',pstate='x';
            }
            else if(isign=='-' && istate=='z'){
                if(psign=='+' && pstate=='x') psign='-',pstate='z';
                else if(psign=='-' && pstate=='x') psign='+',pstate='z';
                else if(psign=='+' && pstate=='y') psign='+',pstate='y';
                else if(psign=='-' && pstate=='y') psign='-',pstate='y';
                else if(psign=='+' && pstate=='z') psign='+',pstate='x';
                else if(psign=='-' && pstate=='z') psign='-',pstate='x';
            }
            else if(isign=='N' && istate=='o') continue;
        }
        cout<<psign<<pstate<<endl;
    }
    return 0;
}
