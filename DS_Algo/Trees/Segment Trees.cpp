#include <iostream>
#define ll long long int
#include<bits/stdc++.h>

using namespace std;
//T.C = O(N)
void buildTree(int *tree,int *a, int index, int s, int e){
	//Base Case
	if(s>e){
		return;
	}
	//Bse case- Leaf Node
	if(s==e){
		tree[index]=a[s];
		return;
	}

	//Recursive Case
	int mid = (s+e)/2;
	//Left Subtree
	buildTree(tree,a,2*index+1,mid+1,e);
	int left=tree[2*index];
	int right=tree[2*index+1];

	tree[index] = min(left,right);
}
//T.C = O(log(N))
int query(int *tree, int index, int s, int e, int qs, int qe){
	///3 cases

	//1. No owerlap
	if(qs>e||qe<s){
		return INT_MAX;
	}

	//2. Complete Overlap
	if(s>=qs && e<=qe){
		return tree[index];
	}

	///3. Partial Overlap-call both sides
	int mid = (s+e)/2;
	int leftAns = query(tree, 2*index,s,mid,qs,qe);
	int rightAns = query(tree, 2*index+1,mid+1,e,qs,qe);
	return min(leftAns,rightAns);
}
//T.C = O(log(N))
void updateNode(int *tree, int index,int s, int e, int i, int value){
	//No overlap
	if(i<s||i>e){
		return;
	}

	// Reached leaf Node
	if(s==e){
		tree[index]=value;
		return;
	}

	//Lying in range -i is lying between s and e
	int mid = (s+e)/2;
	updateNode(tree,2*index,mid,i,value);
	updateNode(tree,2*index+1,mid+1,e,i,value);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;
}
// Range update
// You will be given a range rs and re
// and you increment every element in the range by a value inc
//T.C = O(N)
void updateRange(int *tree, int index, int s, int e, int rs, int re, int inc){
	//No Overlap
	if(re<s||rs>s){
		return;
	}

	//Reached Leaf Node
	if(s==e){
		tree[index]+=inc;
		return;
	}

	//Lying in range - call both sides.
	int mid=(s+e)/2;
	updateRange(tree, 2*index,s,mid,rs,re,inc);
	updateRange(tree, 2*index+1,mid+1,e,rs,re,inc);
	tree[index]=min(tree[2*index],tree[index+1]);
	return;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a[]={1,3,2,-2,4,5};
	int n=sizeof(a)/sizeof(int);


	//Build the tree array
	int *tree = new int[4*n+1];
	int index=1;
	int s=0;
    int e=n-1;
    buildTree(tree,a,index,s,e);

    int no_of_q;
    cin>>no_of_q;
    while(no_of_q--){
    	int qs,qe;
    	cin>>qs>>qe;
    	cout<<"Min value between range is:"<<" ";
    	cout<<query(tree,l,s,e,qs,qe)<<endl;
    }


	return 0;
}