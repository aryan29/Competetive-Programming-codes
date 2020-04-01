#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    double area,a,b,c,d,s,n;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a>>b>>c>>d;
        s=(a+b+c+d)/2;
        n=(s-a)*(s-b)*(s-c)*(s-d);
        area=pow(n,.5);
        printf("%.2f\n",area);
    }
}
