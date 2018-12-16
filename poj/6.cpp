#include<queue>
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
struct node{
	
	int x;
	int y;
	int t;
};




int main(){
	int N,M,T;
	while(cin>>N>>M>>T){
		if(N==0&&M==0&&T==0){
			break;
		}
		char map[10][10];
		struct node start;
		struct node end;
		int mark[N][M];
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				cin>>map[i][j];
				mark[i][j]=0;
				if(map[i][j]=='S'){
					start.x=i;
					start.y=j;
					start.t=0;
				}
				if(map[i][j]=='D'){
					end.x=i;
					end.y=j;
				}
			}
		}
		queue<node> Q;
		while(Q.empty()==false){
			Q.pop();
		}
		
		
		
		Q.push(start);
		mark[start.x][start.y]=1;
		
		int go[][2]=
		{1,0,
		 -1,0,
		 0,1,
		 0,-1
		};
		
		while(Q.empty()==false){
			
			struct node now=Q.front();
			Q.pop();
			for(int i=0;i<4;i++){
				int nx,ny,nt;
				nx=now.x+go[i][0];
				ny=now.y+go[i][1];
				nt=now.t+1;
				
				if(nx<0||nx>=N||ny<0||ny>=M)continue;
				if(map[nx][ny]=='X')continue;
				if(mark[nx][ny]==1)continue;
				if(nx==end.x&&ny==end.y){
					cout<<nt;
					break;
				}
				
				struct node tmp;
				tmp.x=nx;
				tmp.y=ny;
				tmp.t=nt;
				Q.push(tmp);
				mark[nx][ny]=1;
			}
		}
	
	}
	
	return 0;
}
