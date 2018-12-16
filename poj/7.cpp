#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

struct E{
	int w;
	int v;
};


int dp[101][1001];

int main(){
	int s,n;
    struct E list[101];
	while(cin>>s>>n){
		for(int i=1;i<=n;i++){
			cin>>list[i].w>>list[i].v;
		}
		
		for(int i=0;i<=s;i++){
			dp[0][i]=0;
		}
		
		for(int i=1;i<=n;i++){
			for(int j=s;j>=list[i].w;j--){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-list[i].w]+list[i].v);
			}
			
			for(int j=list[i].w-1;j>=0;j--){
				dp[i][j]=dp[i-1][j];
			}
			
			
		}
		
		cout<<dp[n][s];
	}
	
	return 0;
}
