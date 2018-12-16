#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	int out[200];
	for(int i=0;i<T;i++){
		int a[402];
		for(int j=0;j<402;j++){
			a[j]=0;
		}
		int N;
		int s[200];
		int t[200];
		cin>>N;
	    int max=-1;
		for(int j=0;j<N;j++){
			cin>>s[j]>>t[j];
			
		    if(s[j]>t[j]){
				int tmp=s[j];
				s[j]=t[j];
				t[j]=tmp;
			}
			
			if(s[j]%2==0){
				s[j]--;
			}
			if(t[j]%2==1){
				t[j]++;
			}
			
			for(int k=s[j];k<=t[j];k++){
				a[k]++;
			}
		}
		
		
		
		
		/*
		for(int j=0;j<N;j++){
			for(int k=j+1;k<N;k++){
				if(t[j]<s[k]||s[j]>t[k]){
					max=max-10;
					break;		
				}
			}
		}
		*/
		
		
		out[i]=max;
		
	}
	
	
	for(int i=0;i<T;i++){
		cout<<out[i]<<endl;
	}
	
	return 0;
}
