#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int res=0,n=0,num=0,count=0;
        cin>>num;
        n=num;
        while(n!=0){
            res=n%10;
            if(res!=0 && num%res==0){
                count++;
            }
            n=n/10;
        }
        cout<<count<<endl;
    }
}