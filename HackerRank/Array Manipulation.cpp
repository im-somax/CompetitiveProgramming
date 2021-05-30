#include<bits/stdc++.h>

using namespace std;
const int n = 1e7+10;
long long arr[n];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a] += k;
        arr[b+1] -= k;
    }
    for(int i=1;i<=n;i++){
        arr[i]+=arr[i-1];
    }
    long long max=-1;
    for (int i = 1; i <=n; ++i)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}
