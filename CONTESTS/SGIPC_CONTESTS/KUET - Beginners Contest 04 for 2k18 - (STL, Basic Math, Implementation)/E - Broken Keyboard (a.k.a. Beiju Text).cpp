#include<cstdio>
#include<list>
#include<cstring>
using namespace std;

int main(){
    char str[100010];

    while(scanf("%s",str)!=EOF){
        list<char> l;
        auto it=l.begin();
        int len=strlen(str);

        for(int i=0;i<len;i++){
            if(str[i]=='[') it=l.begin();
            else if(str[i]==']') it=l.end();
            else l.insert(it,str[i]);
        }
        for(it=l.begin();it!=l.end();it++) printf("%c",*it);
        printf("\n");
    }
    return 0;
}
