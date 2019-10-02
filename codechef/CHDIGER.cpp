#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int t,c=0,a,b,a1,d=0,k,x=0,a2,i,rem,pos;
    long long int arr[10000];
    scanf("%lld",&t);
    while(t--)
    {
        c=0;d=0;pos=0;
        scanf("%lld %lld",&a,&b);
        a1=a;
        while(a1!=0)
        {
            c++;
            a1=a1/10;
        }
        for(i=1;i<b;i++)
        {
            x=0;k=0;
            a2=a;
            while(a2!=0)
            {
                rem=a2;
                x++;
                if(rem==i && k==0)
                    {
                    arr[d++]=rem;
                    pos=x;
                    k=1;
                    }
                    else if(rem==i)
                        arr[d++]=rem;
                    a2=a2/10;
            }
            if(pos>=2)
            a=a%(long long int)ceil(pow(10,(pos-1)));
            else if(pos==1)
                break;
        }
        for(i=d;i<c;i++)
            arr[i]=b;
        for(i=0;i<c;i++)
            printf("%lld",arr[i]);
        printf("\n");
    }

}

