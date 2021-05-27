#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],hash[5]={0},res=INT_MAX,max = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        hash[a[i]]++;
    }
    for(int i=1;i<=5;i++){
        if(hash[i]>max){
            max=hash[i];
            res=i;
        }
        if(hash[i]==max){
            res = min(res,i);
        }
    }
    cout<<res;
}