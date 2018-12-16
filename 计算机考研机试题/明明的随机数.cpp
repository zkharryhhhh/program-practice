#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	int array[1001];
	int array2[1001];
	int flag[1001];
	for(int i=0;i<1001;i++){
		array[i]=0;
		array2[i]=0;
		flag[i]=0;
	}
	while(cin>>n){  
		int count=0;
		for(int i=0;i<n;i++){
			cin>>array[i];
			if(flag[array[i]]==0){
				array2[count]=array[i];
				count++;
			}
			flag[array[i]]++;
		}
		
		
		for(int i=0;i<count-1;i++){
			for(int j=0;j<count-i-1;j++){
				if(array2[j]>array2[j+1]){
					int tmp=array2[j];
					array2[j]=array2[j+1];
					array2[j+1]=tmp;
				}
			}
		}
		
		for(int i=0;i<count;i++){
			cout<<array2[i]<<endl;
		}
		
	}
	return 0;
}
