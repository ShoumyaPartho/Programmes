#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ara[n],check;
    for(int i=0;i<n;i++) scanf("%d",&ara[i]);
    for(int i=0;i<n;i++){
        if(ara[i]==1) {
            check=1;
            break;
        }
        else check=0;
    }
    if(check) printf("HARD\n");
    else printf("EASY\n");
}
