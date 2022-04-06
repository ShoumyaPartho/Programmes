#include<stdio.h>

int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if(i<=9){
            switch(i){
                case 1:
                    printf("one\n");
                    continue;
                case 2:
                    printf("two\n");
                    continue;
                case 3:
                    printf("three\n");
                    continue;
                case 4:
                    printf("four\n");
                    continue;
                case 5:
                    printf("five\n");
                    continue;
                case 6:
                    printf("six\n");
                    continue;
                case 7:
                    printf("seven\n");
                    continue;
                case 8:
                    printf("eight\n");
                    continue;
                case 9:
                    printf("nine\n");
                    continue;
            }
        }
        else if(i%2==0) printf("even\n");
        else printf("odd\n");
    }
    return 0;
}
