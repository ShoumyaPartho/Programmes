#include<stdio.h>
int a[10];

int fp(int x)
{
    if(x==10)
    {
        return;
    }
    if(a[x]%2==0)
    {
        printf("%d\n",a[x]);
    }
    fp(x+1);
}

int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    fp(0);
}
