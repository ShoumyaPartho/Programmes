#include<stdio.h>

int main(){
    int ax1,ay1,ax2,ay2,bx1,bx2,by1,by2,tc,t;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d %d %d %d %d %d %d %d",&ax1,&ay1,&ax2, &ay2,&bx1,&by1,&bx2,&by2);
        printf("Case %d: ",t);

        if(ax2<=bx1) {
            printf("No\n");
            continue;
        }
        if(ay2<=by1){
            printf("No\n");
            continue;
        }
        if(ax1>=bx2){
            printf("No\n");
            continue;
        }
        if(ay1>=by2){
            printf("No\n");
            continue;
        }

        printf("Yes\n");
    }
    return 0;
}
