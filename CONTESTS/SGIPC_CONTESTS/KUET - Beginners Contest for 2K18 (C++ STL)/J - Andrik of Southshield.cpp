#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
using namespace std;

int main(){
    map<string,string> mp;
    char s1[12],s2[12],c,s3[12];
    int i=0;
    gets(s1);

    while(scanf("%s",s1) && strcmp(s1,"END")){
        cin>>s2;
        mp[s2]=s1;
        //cout<<mp[s2]<<endl;
    }

    getchar();
    gets(s1);

    while(scanf("%c",&c)){
        if(isalpha(c)) s3[i++]=c;
        else{
            s3[i]='\0';
            i=0;
            if(strcmp(s3,"END")==0) break;
            if(mp.find(s3)!=mp.end()) cout<<mp[s3];
            else cout<<s3;
            putchar(c);
        }
    }
    return 0;
}
