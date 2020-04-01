#include<bits/stdc++.h>
using namespace std;
void Edge(vector<int>arr[],int u,int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}
void dfsutil(int u,vector<int>arr[],vector<bool> &visited)
{
    visited[u]=true;
    int i;
    for(i=0;i<arr[u].size();i++)
    {
        if(visited[arr[u][i]]==false)
            dfsutil(arr[u][i],arr,visited);
    }
}
int dfs(vector<int> arr[],int n)
{
    vector<bool> visited(n,false);
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            c++;
            dfsutil(i,arr,visited);
        }
    }
    return c;
}
int main()
{
    int t,n,e,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        vector<int> arr[n+1];
        scanf("%d",&e);
        while(e--)
        {
            scanf("%d %d",&x,&y);
            Edge(arr,x,y);
        }
        printf("%d\n",dfs(arr,n));
    }
}
