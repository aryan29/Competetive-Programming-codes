#include<stdio.h>
int main()
{
    int t,x,a,sum,n;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %d",&x,&a);
    n=a-x;
    sum=(a+1)*n;

    sum=sum-(((n-1)*n)/2);
    printf("%d\n",sum);
    }

}
