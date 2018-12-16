#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
	int a;
	char s[40];
	int b;
	while(cin>>a>>s>>b){
    	int value=0;
		int len=strlen(s);
		int c=1;
    	for(int i=len-1;i>=0;i--){
    		int x=0;
    		if(s[i]>='0'&&s[i]<='9'){
    			x=s[i]-'0';
    		}
    		
    		if(s[i]>='a'&&s[i]<='z'){
    			x=s[i]-'a'+10;
    		}
    		
    		if(s[i]>='A'&&s[i]<='Z'){
    			x=s[i]-'A'+10;
    		}
    		
    		value=value+x*c;
    		c=c*a;
    	}
    	
    	
    	char s2[40]={0};
    	
    	if(value==0){
    		cout<<0<<endl;
    	}
    	int count=0;
    	while(value!=0){
    		int y=value%b;
    		value=value/b;
    		if(y>=10){
    			s2[count]='A'+y-10;
    		}
    		else{
    			s2[count]=y;
    		}
    		count++;
    	}
    	
    	
    	for(int i=count-1;i>=0;i--){
    		printf("%c",s2[i]+'0');
    	}
    	cout<<endl;
    	
	}
	return 0;
} 
