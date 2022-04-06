#include<cstdio>

int main(){
    int n,police=0,cnt=0,temp;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp>0) police+=temp;
        else{
            if(!police) cnt++;
            else police--;
        }
    }
    printf("%d\n",cnt);

    return 0;
}
