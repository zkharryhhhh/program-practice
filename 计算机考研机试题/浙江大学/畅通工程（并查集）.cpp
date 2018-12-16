#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<string>

using namespace std;



int parent[1001];

int findRoot(int x){
	if(parent[x]==-1){
		return x;
	}
	else{
		int root=findRoot(parent[x]);
		parent[x]=root;
		return root;
	}
}

int main(){
	
	
	int n,m;
	for(int i=0;i<1001;i++){
		parent[i]=-1;
	} 
	while(cin>>n){
		if(n==0){
			break;
		}
		
		cin>>m;
		
		for(int i=1;i<=m;i++){
			
			int a,b;
			cin>>a>>b;
			a=findRoot(a);
			b=findRoot(b);
			if(a!=b){
				parent[b]=a;
			}
		}
		int count=0;
		for(int i=1;i<=n;i++){
			if(parent[i]==-1){
				count++;
			}
		}
		cout<<count-1<<endl;	
	}
	
	return 0;
}
 
