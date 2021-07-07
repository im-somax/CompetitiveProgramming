#include <bits/stdc++.h>

using namespace std;

int main()

{
	int t;
	cin>>t;
	while(t--){
		int xa,xb,Xa,Xb;
		cin>>xa>>xb>>Xa>>Xb;
		int count=0;
		count+=(Xa/xa);
		count+=(Xb/xb);
		cout<<count<<endl;
	}
	return 0;
}