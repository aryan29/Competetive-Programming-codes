
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <int> adj[50005];
bool visited[50005];
int coun=0;
    int dfs(int s) 
    {
        visited[s] = true;
        for(int i = 0;i < adj[s].size();++i)    
        {
         if(visited[adj[s][i]] == false)
             {
                //coun++;
             	dfs(adj[s][i]);
             	
             }
        }
    }

    void initialize() {
        for(int i = 0;i <20005;++i)
         visited[i] = false;
    }

    int main() {
    	int i,ma=-1;
    		#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
        int nodes, edges, x, y,ans,t;
       ma=-1;coun=0;
        cin >> nodes;                       //Number of nodes
        cin >> edges;                       //Number of edges
        for(int i = 0;i < edges;++i) {
         cin >> x >> y;     
     //Undirected Graph 
         adj[x].push_back(y);                   //Edge from vertex x to vertex y
         //adj[y].push_back(x);                   //Edge from vertex y to vertex x
        }

        initialize();                           //Initialize all nodes as not visited

        for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
            // coun=0;
             dfs(i);
             coun++;
             //ans=coun;
             //printf("%d\n",ans);
             //if(ans>ma)
             	//ma=ans;
         }
        }
        //for graph to be tree 
        //only 1 component
        //nodes=(edges+1)
        //each except base element should have 1 parent
if(coun==1 && (nodes)==(edges+1))
	printf("YES\n");
else
	printf("NO\n");
}



