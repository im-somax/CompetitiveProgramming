#include <iostream>
#define ll long long int
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int n,x,k;
      cin>>n>>x>>k;
      if(x%k==0){
        cout<<"YES"<<endl;
      }
      else if(((n+1)-x)%k==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}