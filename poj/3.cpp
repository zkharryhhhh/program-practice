#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct Node{
	Node *lchild;
	Node *rchild;
	char c;
};


struct Node tree[50];
int loc;
char str1[30],str2[30];
Node *creat(){
	tree[loc].lchild=tree[loc].rchild=NULL;
	return &tree[loc++];
}

void postorder(Node *T){
	if(T->lchild!=NULL){
		postorder(T->lchild);
	}
	if(T->rchild!=NULL){
		postorder(T->rchild);
	}
	cout<<T->c;
}
//»¹Ô­Ê÷
Node *build(int s1,int e1,int s2,int e2){
	Node *ret=creat();
	ret->c=str1[s1];
	int rootidx;
	for(int i=s2;i<=e2;i++){
		if(str2[i]==str1[s1]){
			rootidx=i;
			break;
		}
	}
	if(rootidx!=s2){
		ret->lchild=build(s1+1,s1+(rootidx-s2),s2,rootidx-1);
	}
	if(rootidx!=e2){
		ret->rchild=build(s1+(rootidx-s2)+1,e1,rootidx+1,e2);
	}
	
	return ret;
	
} 

int main(){
	while(cin>>str1>>str2){
		int l1=strlen(str1);
		int l2=strlen(str2);
		loc=0;
		Node *T=build(0,l1-1,0,l2-1);
		postorder(T);
		cout<<endl;
	}
	return 0;
}



