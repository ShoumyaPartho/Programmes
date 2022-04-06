#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    int n,p,RFP=0;

    while(scanf("%d %d",&n,&p)&& (n || p)){
        getchar();
        char s[100],name[p][100];
        int in=0,hin=0,quantity,hq=0;
        float price[p];

        for(int k=0;k<n;k++) {
            scanf("%[^\n]s",s);
            getchar();
        }

        while(p--){
            scanf("%[^\n]s",name[in]);
            getchar();
            scanf("%f %d",&price[in],&quantity);
            getchar();
            if(quantity>hq){
                hq=quantity;
                hin=in;
            }
            else if(quantity==hq){
                if(price[hin]>price[in]){
                    hin=in;
                }
            }
            in++;
            for(int k=0;k<quantity;k++){
                char str[100];
                scanf("%[^\n]s",str);
                getchar();
            }
            //printf("Program ran here smoothly\n");
        }
        if(++RFP>1) printf("\n");
        printf("RFP #%d\n%s\n",RFP,name[hin]);
    }
    return 0;
}
