#include <bits/stdc++.h> 

using namespace std; 

const int N = 1e5+10; 
vector<int> g[N]; 
int depth[N],heigth[N]; 
//Logic : 

bool dfs(int vertex, int par=0){ 
    for(int child: g[vertex]){ 
        if(child == par) continue; // check condition for having track of parent. 
        depth[child] = depth[vertex]+1; 
        dfs(child, vertex); 
        heigth[vertex]= max(heigth[vertex],heigth[child]+1); 
    } 
} 

int main(){ 
    int n; cin>>n; 
    for(int i=0;i<n-1;i++){ 
        int x,y; 
        cin>>x>>y; 
        g[x].push_back(y); 
        g[y].push_back(x); 
    } 
    dfs(1); 
    for(int i=1;i<=n;i++){ 
        cout<<depth[i]<<" "<<heigth[i]<<endl;  
    } 
}