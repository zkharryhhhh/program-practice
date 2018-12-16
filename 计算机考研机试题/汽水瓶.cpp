#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		int count=0;
		
		if(n==0){
			break;
		}
		while(1){
			
			if(n==1)break;
			if(n==2){
				count+=1;
				break;
			}
			count=count+n/3;
			n=n/3+n%3;
			
		}
		cout<<count<<endl;
	}
	return 0;
}
