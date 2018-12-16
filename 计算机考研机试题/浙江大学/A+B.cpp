#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<string>
#include<map>

using namespace std;


map<string,int>mp;


int main(){
	
	mp["zero"]=0;
	mp["one"]=1;
	mp["two"]=2;
	mp["three"]=3;
	mp["four"]=4;
	mp["five"]=5;
	mp["six"]=6;
	mp["seven"]=7;
	mp["eight"]=8;
	mp["nine"]=9;
	string a;
	

    while(getline(cin,a)){
        int x,y;
        int pos1=a.find('+');
        int pos2=a.find('=');
        string str1=a.substr(0,pos1-1);
        string str2=a.substr(pos1+2,pos2-pos1-3);
        if(str1.find(' ')==string::npos)//表示没有找到匹配项 ，即没有空格，那么是只有一位的数字 
            x=mp[str1];
        else
        {
            int pos3=str1.find(' ');
            string s1=str1.substr(0,pos3);
            string s2=str1.substr(pos3+1);
            x=mp[s1]*10+mp[s2];
        }
        if(str2.find(' ')==string::npos)
            y=mp[str2];
        else
        {
            int pos3=str2.find(' ');
            string s1=str2.substr(0,pos3);
            string s2=str2.substr(pos3+1);
            y=mp[s1]*10+mp[s2];
        }
        if(x+y==0)
            break;
        else
            cout<<x+y<<endl;
    }
    return 0;
}
