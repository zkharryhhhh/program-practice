#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	double a;
	double arr[220];
	char ch;
	
	while(cin>>a&&a){
		
		if(a==0){
			break;
		}
		double result=0;
		int num=0;
		
		arr[num]=a;
		while(cin>>ch>>a){
			if(ch=='+'){
				arr[++num]=a;
			}
			if(ch=='-'){
				arr[++num]=-a;
			}
			if(ch=='*'){
				arr[num]*=a;
			}
			if(ch=='/'){
				arr[num]/=a;
			}
			
			char ccc=cin.get();
			if(ccc=='\n'){
				break;
			}
		}
		
		for(int i=0;i<=num;i++){
			
			result+=arr[i];
		}
		
		printf("%.2lf\n",result);
		//cout<<result<<endl;
	}
	
	
	
	return 0;
}
