#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;


int issushu(int m){
	int flag=1;
	for(int i=2;i<=sqrt(double(m));i++){
		if(m%i==0){
			flag=0;
			break;
		}
	}
	if(flag==1){
		return 1;
	}
	else{
		return 0;
	}
} 


int main(){
	
	int sushu[10000];
	for(int i=0;i<10000;i++){
		sushu[i]=0;
	}
	
	int count=0;
	for(int i=2;i<=10000;i++){
		if(issushu(i)){
			sushu[count]=i;
			count++;
		}
	}

	int a;
	//break是跳出当层循环 
	while(cin>>a){
		int sum;
		int num; 
		if(a==0) break;
		
		num=0;
		for(int i=0;i<count;i++){
			sum=0;
			if(sushu[i]>a) break;
			//i表示连续素数串的开头，j表示连续素数串的结束 
			for(int j=i;j<count;j++){
		        sum+=sushu[j];
		        if(sum>a) break;
		        if(sum==a) {
		        	num++;
		        	break;
		        }
			}	
		} 
		
		cout<<num<<endl;
	}
	
	return 0;
	
	
}
