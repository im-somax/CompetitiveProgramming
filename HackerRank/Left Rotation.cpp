#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int arr[n],res[n];
    int idx=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        idx=(i+(n-d))%n;
        res[idx]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}