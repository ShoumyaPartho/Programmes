#include<stdio.h>
#include<string.h>

int main(){
    char s[1100];
    int l;
    bool a=true;
    while(gets(s)) {
        l=strlen(s);
        //a=1;
        for(int i=0;i<l;i++) {
            if(s[i]=='"'){
                if(a) {
                    printf("``");
                    //a++;
                }
                else {
                    printf("''");
                    //a--;
                }
                a=!a;
            }
            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
