#include<bits/stdc++.h>
using namespace std;
int a[9][9];
int c=0;
bool isPossible(int k, int row, int col){
    //Check for element not present in same row
      for(int i=0;i<9;i++)
    {
        if(a[row][i]==k)
        return 0;
    }
    for(int i=0;i<9;i++)
    {
        if(a[i][col]==k)
        return 0;
    }
    int i=(row/3)*3;
    int j=(col/3)*3;
    for(;i< (((row/3)+1)*3) ; i++)
    {
    for(;j< (((col/3+1))*3) ; j++)
    {
        if(a[i][j]==k)
        return 0;
    }
    }
   // cout<<1<<"\n";
    return 1;
 
}
int check0(int * row,int * col)
{
    for(int i=0;i<9;i++)
    for(int j=0;j<9;j++)
    if(a[i][j]==0)
    {
        *row=i;
        *col=j;
        return 1;
    }
     return 0;
}
void solve()
{
     //int c=-1;
     int row,col;
     if(!check0(&row,&col))
     {
         for(int i=0;i<9;i++)
         {
             for(int j=0;j<9;j++)
             cout<<a[i][j]<<" ";
             cout<<"\n";
         }
         c=-1;
       
        return ; 
     }
     {
         int k;
         {
         for( k=1;k<=9;k++)
         {
             if(isPossible(k,row,col)==1)
             {
                 a[row][col]=k;
                 solve();
                 if(c==-1)break;
                 a[row][col]=0;
             }
             if(c==-1)break;
         }
         }
         return  ;
     }
}
 int main()
{
     memset(a,0,sizeof(a));
     for(int i=0;i<9;i++)
     for(int j=0;j<9;j++)
     cin>>a[i][j];
     solve();
     return 0;
}