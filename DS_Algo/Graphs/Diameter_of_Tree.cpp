#include <bits/stdc++.h> 

using namespace std; 

const int N = 1e5+10; 
vector<int> g[N]; 
int depth[N];


//Logic: 1. With any root find max depth node. 
//       2. With that node as root find max depth.

void dfs(int vertex, int par=-1){ 
    for(int child: g[vertex]){ 
        if(child == par) continue; // check condition for having track of parent.
        depth[child] = depth[vertex]+1;
        dfs(child, vertex); 
    } 
} 
int main(){ 
    int n; 
    cin>>n; 
    for(int i=0;i<n-1;i++){ 
        int x,y; 
        cin>>x>>y; 
        g[x].push_back(y); 
        g[y].push_back(x); 
    } 
    dfs(1);
    int max_dp = -1;
    int max_d_node;
    //Step 1. Find with any root find max depth node. 
    for(int i=1;i<=n;i++){
        if(max_dp<depth[i]){
            max_dp=depth[i];
            max_d_node = i;
        }
        depth[i]=0;
    }
    dfs(max_d_node);
    //Step 2. Find with that node as root find max depth.
    max_dp = -1;
    for(int i=1;i<=n;i++){
        if(max_dp<depth[i]){
            max_dp=depth[i];
        }
    }
    cout<<max_dp<<endl;
}