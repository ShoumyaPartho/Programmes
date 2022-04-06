#include<cstdio>

int main(){
    int n,m,check=0;
    char pixel;
    scanf("%d %d",&n,&m);
    getchar();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%c",&pixel);
            getchar();
            if(pixel=='C' || pixel=='M' || pixel=='Y')
                check=1;
        }
    }
    if(!check) printf("#Black&White\n");
    else printf("#Color\n");

    return 0;
}
