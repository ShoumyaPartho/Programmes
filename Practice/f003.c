#include<stdio.h>

void binary_search(int a[],int n, int num) {
    int mid_indx,low_indx=0,high_indx=n;

    while(low_indx<=high_indx) {
        mid_indx=(low_indx+high_indx)/2;

        if(num==a[mid_indx]) break;
        if(num<a[mid_indx]) high_indx=mid_indx-1;
        else low_indx=mid_indx+1;
    }
    if(low_indx>high_indx) printf("The number %d is not found in the given array\n",num);
    else printf("The given number %d is the %d th element of the given array\n",a[mid_indx],mid_indx);
}

int main() {

    int n,i,num;
    printf("Please enter the range of the array: ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Please enter the required value: ");
    scanf("%d",&num);
    binary_search(a,n,num);

    return 0;
}
