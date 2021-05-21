#include<bits/stdc++.h>

using namespace std;


int main() {
    long long int s,t,a,b,counto=0,counta=0;
    cin>>s>>t>>a>>b;
    long long int n,m;
    cin>>n>>m;
    long long int app[n],org[m];
    for(long long int i=0;i<n;i++){
        cin>>app[i];
        if(app[i]+a>=s && app[i]+a<=t){
            counta++;
        }
    }
    for(long long int j=0;j<m;j++){
        cin>>org[j];
        if(org[j]+b>=s && org[j]+b<=t){
            counto++;
        }
    }
    cout<<counta<<endl;
    cout<<counto<<endl;
}