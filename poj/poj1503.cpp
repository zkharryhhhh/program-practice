#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<cstring>
using namespace std;

//����ʱ�пӣ���Ҫ����������������0��ͷ�� 
char *result(char *a,char *b){
	int jinwei=0;
	for(int i=101;i>=0;i--){
		int tmp=a[i]-48+b[i]-48+jinwei;
		if(tmp>=10){
			jinwei=1;
			a[i]=(char)(tmp-10+48);
			
		}
		else{
			jinwei=0;
			a[i]=(char)(tmp+48);//�˴��漰��ת���ַ������⣬����ֱ��ʹ��a[i]=tmpʱ���ܻ��ʾ��ת���ַ�����ʽ����'1'����'\001'���е����� 
			
		}
	}
	return a;
}

int main(){
	char sum[103];
	char in[103];
	for(int i=0;i<102;i++){
		in[i]='0';
		sum[i]='0';
	}
	sum[102]=in[102]='\0';
	
	//�˴��пӣ���Ҫ��������ʱ�����ַ���Ϊһ��0ʱ���������
	//������ʱ����������0��ͷ�ķ����ַ��� 
	while(cin>>in){
		int iszero=1;
		for(int i=0;i<strlen(in);i++){
			if(in[i]-48!=0){
				iszero=0;
				break;
			}
		}
		
		if(iszero==1){
			break;
		}
		int len=strlen(in);
		for(int i=0;i<len;i++){
			in[101-i]=in[len-i-1];
		}
		for(int i=0;i<102-len;i++){
			in[i]='0';
		} 
		//cout<<in<<endl;
		char *p=result(sum,in);
		for(int i=0;i<102;i++){
			sum[i]=p[i];
		}
		
	}
	
	int canoutput=-1;
	for(int i=0;i<102;i++){
		if(sum[i]!='0'){
			canoutput=i;
			break;
		}
	}
	
	if(canoutput==-1){
		cout<<0<<endl;
	}
	else{
		for(int i=canoutput;i<102;i++){
			cout<<sum[i];
		}
	}
	cout<<endl;
	return 0;
}



/*

#include<iostream>

using namespace std;

#include<cstring>
#include<cstdio>




int main(){




  //  freopen("1.txt","r",stdin);




char a[110];




int s[110]={0},la,ls=0;




while(cin>>a){




    la=strlen(a)-1;




    if(a[0]=='0'&&la==0) break;




    ls=0;




    for(int i=la;i>=0;i--)




    s[ls++]+=(a[i]-'0');




}




for(int i=109;i>=0;i--)




    if(s[i]!=0){




        ls=i;




        break;




    }




    int k=0;




    while(k<=ls){

        if(s[k]>=10){

            s[k+1]+=s[k]/10;

            s[k]%=10;

        }




        k++;




    }


    while(s[ls+1]!=0){


    ls++;




    if(s[ls-1]>10){




        s[ls]+=s[ls-1]/10;




        s[ls-1]%=10;




    }




    }




    for(int i=ls;i>=0;i--)




        cout<<s[i];




    cout<<endl;




} 




*/










