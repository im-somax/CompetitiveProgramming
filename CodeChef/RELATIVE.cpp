#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){
		int c,g;
		long long int h=-1;
		cin>>g>>c;
		if((c*c)%(2*g)==0){
			h = (c*c)/(2*g);
		}
		cout<<h<<endl;
	}
	return 0;
}
