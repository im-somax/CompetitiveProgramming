#include <iostream>
#define ll long long int
#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int sum=0,n;
		cin>>n;
		while(n!=0){
			sum+=n%10;
			n/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}