#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<math.h>

using namespace std;


int main(){
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		int count=0;
		while(n!=1){
			if(n%2==0){
				n=n/2;
			}
			else{
				n=(3*n+1)/2;
			}
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
