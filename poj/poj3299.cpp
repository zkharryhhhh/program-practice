
//poj3299 知二求一，运用数学公式 
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main(){
	
	
	char a;
	
	float t=101;
	float d=101;
	float h=101;
	while(1){
	
		t=d=h=101;
	    for(int i=0;i<2;i++){
	    	cin>>a;
	    	if(a=='E')return 0; 
	    	if(a=='T')cin>>t;
			if(a=='D')cin>>d;
			if(a=='H')cin>>h;
	    }
	    if(t==101){
	    	t=h-0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10);
	    }
	    if(d==101){
	    	d=1/((1/273.16)-((log((((h-t)/0.5555)+10.0)/6.11))/5417.7530))-273.16;
	    }
	    if(h==101){
	    	h=t+0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10);
	    }

	    cout<<'T'<<' ';
	    printf("%.1f ",t);
	    cout<<'D'<<' ';
	    printf("%.1f ",d);
	    cout<<'H'<<' ';
	    printf("%.1f ",h);
	    cout<<endl;
	
	}
	
	return 0;
}
 
