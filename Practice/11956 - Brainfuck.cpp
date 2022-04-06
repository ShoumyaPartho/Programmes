#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int tc,t;
    cin>>tc;

    for(t=1;t<=tc;t++){
        int current=0,memory[100]={0};
        char s[100010];
        cin>>s;
        int l=strlen(s);

        for(int i=0;i<l;i++){
            if(s[i]=='>'){
                ++current;
                if(current==100) current=0;
            }
            else if(s[i]=='<'){
                --current;
                if(current==-1) current=99;
            }
            else if(s[i]=='+'){
                memory[current]++;
                if(memory[current]==256) memory[current]=0;
            }
            else if(s[i]=='-'){
                memory[current]--;
                if(memory[current]==-1) memory[current]=255;
            }
        }
        printf("Case %d:",t);
        for(int i=0;i<100;i++) printf(" %02X",memory[i]);
        printf("\n");
    }
    return 0;
}
