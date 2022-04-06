#include<cstdio>
#include<cstring>

int main(){
    char s[100];
    scanf("%s",s);

    int l=strlen(s),a=0;
    for(int i=0;i<l;i++){
        if(s[i]=='a') a++;
    }
    if(a>(l/2)) printf("%d\n",l);
    else printf("%d\n",2*a-1);

    return 0;
}
