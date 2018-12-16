#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;


int isprime(int m){
	int flag=1;
	for(int i=2;i<sqrt(m+0.5);i++){
		if(m%i==0){
			flag=0;
			break;
		}
	}
	if(flag==1) {
		return 1;
	}
	else{
		return 0;
	} 
}

int main(){
	
	
	
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		int a,b;
		for(int i=3;i<=n/2;i=i+2){
			if(isprime(i)&&isprime(n-i)){
				a=i;
				b=n-i;
				break;
			}
		}
		cout<<n<<" = "<<a<<" + "<<b<<endl;
	}
	return 0;
}
