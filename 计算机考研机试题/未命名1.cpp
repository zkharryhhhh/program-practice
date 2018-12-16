#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int a=0,b=0,c=0;

void get_coe(string str){
	int len=str.length();
	
	str.append(1,'+');
	int t=0;
	int isNegative=1;
	
}
 
int main(){
	string str;
	
	while(cin>>str){
		get_coe(str);
		int d=b*b-4*a*c;
		if(d<0){
			cout<<"No Solution"<<endl;
		}
		else{
			double t=sqrt(d);
			double x1=(-1*b-t)/(2*a);
			double x2=(-1*b+t)/(2*a);
			
			printf("%.2lf %.2lf",min(x1,x2),max(x1,x2));
			
		}
		
		a=0;
		b=0;
		c=0;
		
	}
	
	return 0;
}
