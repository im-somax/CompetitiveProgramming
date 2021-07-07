#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){
		int d,x,y,z,res=-1;
		cin>>d>>x>>y>>z;
		if(d<7 && d>=1){
			res=max(x*7,((d*y)+((7-d)*z)));
		}
		cout<<res<<endl;
	}
	return 0;
}
