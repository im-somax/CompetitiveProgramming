#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define modulo 1000000007

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll m,n;
		cin>>n>>m;
		ll count=0;
		vector<long long> mod(n+1,1);
		for(ll a=2;a<=n;a++){
			ll x=m%a;
			count+=mod[x];
			for(ll b=x;b<=n;b+=a){
				mod[b]++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}