#include<stdio.h>
#include<string.h>

int main() {
    char hel[]="hello",ara[105];
    int i,j,k,l,a,x=0;
    scanf("%s",ara);
    l=strlen(ara);
    for(i=0;i<l;i++) {
        if(ara[i]=='h'){
            x=1;
            k=0;
            for(j=i+1;j<l;j++){
                if(ara[j]==hel[k]) a=1;
                else if(ara[j]==hel[k+1]) {
                    k++;
                    a=1;
                }
                if(k>5){
                    break;
                }
                else {
                    a=0;
                    break;
                }
            }
            if(a) printf("YES\n");
            else if(!a) printf("NO\n");
            break;
        }
        if(x) break;
    }
    return 0;
}
