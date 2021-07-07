#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],res[33]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			int x=a[i], j=32;
			while(x>0){
				res[j]=res[j]+(x%2);
				j--;
				x=x/2;
			}
		}
		int count=0;
		for(int i=0;i<33;i++){
			if(res[i]%k == 0){
				count = count + (res[i] / k);
			}
			else{
				count = count + (res[i]/k) + 1; 
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
