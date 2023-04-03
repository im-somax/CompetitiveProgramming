#include <bits/stdc++.h> 

using namespace std; 

const int N = 1e5+10; 
vector<int> g[N]; 
int par[N];


//Logic: 1. Find path of two nodes sperately from root node.
//       2. Then using those path find the point of diversion in it.

void dfs(int vertex, int p=-1){ 
    par[vertex] = p;
    for(int child: g[vertex]){ 
        if(child == p) continue; // check condition for having track of parent.
        dfs(child, vertex); 
    } 
} 


vector<int> path(int v){
    vector<int> ans;
    while(v != -1){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
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
    
    dfs(1); // To store the parents.
    
    int x,y;
    cin>>x>>y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int mn_ln = min(path_x.size(),path_y.size());
    
    int lca = -1;
    for(int i=0;i<mn_ln;i++){
        if(path_x[i]==path_y[i]){
            lca = path_x[i];
        }
        else{
            break;
        }
    }
    cout<<lca<<endl;
}