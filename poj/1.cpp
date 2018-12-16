#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

using namespace std;
int jumpfloor(int m){
	if(m==2){
		return 2;
	}
	if(m==1){
		return 1;
	}
	return jumpfloor(m-1)+jumpfloor(m-2);
}


int main()
{
	int num;
	cin>>num;
	cout<<jumpfloor(num);

	return 0;
}
