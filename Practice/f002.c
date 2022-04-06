#include<stdio.h>

int fnd_max(int ara[],int n) {

    int i,max=ara[0];
    for(i=1;i<n;i++) {
        if(ara[i]>max) {
            max=ara[i];
        }
    }
    return max;
}

int main() {

    int n,i,max;
    printf("Please enter the range of array: ");
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++) {
        scanf("%d",&ara[i]);
    }
    max=fnd_max(ara,n);

    printf("The maximum value is: %d\n",max);

    return 0;
}
