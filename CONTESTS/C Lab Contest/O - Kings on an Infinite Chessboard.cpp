#include<stdio.h>

int main(){
    int tc,t,temp,r1,c1,r2,c2;
    scanf("%d",&tc);

    for(t=1;t<=tc;t++){
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        printf("Case %d: ",t);
        if(r1>r2) {
            temp=r1;
            r1=r2;
            r2=temp;
        }
        if(c1>c2){
            temp=c1;
            c1=c2;
            c2=temp;
        }
        if(r2-r1==c2-c1) printf("%d\n",r2-r1);
        else if(r2-r1<c2-c1){
            printf("%d\n",c2-(c1+r2-r1)+(r2-r1));
        }
        else{
            printf("%d\n",r2-(r1+c2-c1)+(c2-c1));
        }
    }
    return 0;
}
