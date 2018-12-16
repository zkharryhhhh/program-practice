#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;


#define N 10000001


int tree[N];

int findroot(int x){
	if(tree[x]==-1){
		return x;
	}
	else{
		int tmp=findroot(tree[x]);
		tree[x]=tmp;
		return tmp;
	}
	
} 
int sum[N];

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<N;i++){
			tree[i]=-1;
			sum[i]=1;
			
		}
		
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			a=findroot(a);
			b=findroot(b);
			if(a!=b){
				tree[a]=b;
				sum[b]+=sum[a];
			}
			
		}
		
		int ans=1;
		
		for(int i=0;i<N;i++){
			if(tree[i]==-1&&sum[i]>ans){
				ans=sum[i];
			}
		}
		
		cout<<ans<<endl;
		
	}
}
