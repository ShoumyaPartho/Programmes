#include<cstdio>

int main(){
    int n,check=0;
    scanf("%d",&n);
    getchar();
    char seat[n][6];

    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++) scanf("%c",&seat[i][j]);
        getchar();
        seat[i][5]='\0';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(seat[i][j]=='O' && seat[i][j+1]=='O'){
                seat[i][j]='+',seat[i][j+1]='+';
                check=1;
                break;
            }
        }
        if(check) break;
    }
    if(check){
        printf("YES\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++) printf("%c",seat[i][j]);
        printf("\n");
        }
    }
    else printf("NO\n");

    return 0;
}
