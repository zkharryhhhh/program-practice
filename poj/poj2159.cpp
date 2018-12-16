#include<iostream>
#include<string.h>
using namespace std;

//理解思路，并不是按照题目举例的字母替换，而是找到两个字符串的频次，并按大小顺序进行排列，若频次表一致，说明可以进行密码替换 


int main(){
	
	int flag=1;
	
	
	char a[100];
	char b[100];
	char s1[26];
	char s2[26];
	
	char n1[26];
	char n2[26];
	
	int j1=0;
	int j2=0;
	for(int i=0;i<26;i++){
		s1[i]=s2[i]=n1[i]=n2[i]=0;
	}
	
	cin>>a>>b;
	if(strlen(a)!=strlen(b)){
		cout<<"NO"<<endl;
		return 0;
	}
		
	
	
	for(int i=0;i<strlen(a);i++){
		s1[a[i]-65]++;
	}
	for(int i=0;i<strlen(b);i++){
		s2[b[i]-65]++;
	}
	
	for(int i=0;i<26;i++){
		if(s1[i]!=0){
			n1[j1]=s1[i];
			j1++;
		}
		if(s2[i]!=0){
			n2[j2]=s2[i];
			j2++;
		}
	}
	
	
	if(j1!=j2){
		cout<<"NO"<<endl;
		return 0;
	}
	
	
	for(int i=0;i<j1;i++){
		for(int j=0;j<j1-i-1;j++){
			if(n1[j]>n1[j+1]){
				int tmp=n1[j];
				n1[j]=n1[j+1];
				n1[j+1]=tmp;
			}
		}
	}
	
	
	for(int i=0;i<j2;i++){
		for(int j=0;j<j2-i-1;j++){
			if(n2[j]>n2[j+1]){
				int tmp=n2[j];
				n2[j]=n2[j+1];
				n2[j+1]=tmp;
			}
		}
	}
	
	
	for(int i=0;i<j1;i++){
		if(n1[i]!=n2[i]){
			flag=0;
		}
	}
	
	
	
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	
	
	
	return 0; 
}
