#include<stdio.h>
#include<string.h>

int main(){
    char line[105];
    gets(line);
    int cnt=0,check;
    for(int i=0;i<strlen(line);i++){
        check=0;
        if(cnt==0){
            for(int j=i;j<strlen(line);j++){
                if(line[j]=='h'){
                    cnt++;
                    i=j-1;
                    check=1;
                    break;
                }
                else check=0;
            }
            if(!check) {
                printf("NO\n");
                break;
            }
            else continue;
        }
        if(cnt==1){
            for(int j=i+1;j<strlen(line);j++){
                if(line[j]=='e'){
                    cnt++;
                    i=j-1;
                    check=1;
                    break;
                }
                else check=0;
            }
            if(!check) {
                printf("NO\n");
                break;
            }
            else continue;
        }
        if(cnt==2){
            for(int j=i+1;j<strlen(line);j++){
                if(line[j]=='l'){
                    cnt++;
                    i=j-1;
                    check=1;
                    break;
                }
                else check=0;
            }
            if(!check) {
                printf("NO\n");
                break;
            }
            else continue;
        }
        if(cnt==3){
            for(int j=i+1;j<strlen(line);j++){
                if(line[j]=='l'){
                    cnt++;
                    i=j-1;
                    check=1;
                    break;
                }
                else check=0;
            }
            if(!check) {
                printf("NO\n");
                break;
            }
            else continue;
        }
        if(cnt==4){
            for(int j=i+1;j<strlen(line);j++){
                if(line[j]=='o'){
                    cnt++;
                    i=j-1;
                    check=1;
                    break;
                }
                else check=0;
            }
            if(!check) {
                printf("NO\n");
                break;
            }
            else printf("YES\n");
        }
    }
    return 0;
}
