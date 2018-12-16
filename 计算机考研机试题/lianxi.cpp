
#include<iostream>
#include<stdio.h>
using namespace std;

const int maxn=201;
int main()
{
    double temp,ans[maxn];
    char ch;
    while(cin>>temp&&temp)
    {
        int num=0;
        double sum=0;
        ans[num]=temp;
        while(cin>>ch>>temp)
        {
            switch(ch)
            {
            case '+':ans[++num]=temp;
                break;
            case '-':ans[++num]=-temp;
                break;
            case '*':ans[num]*=temp;
                break;
            case '/':ans[num]/=temp;
                break;
            }
            char c=cin.get();
            if(c=='\n')
                break;
        }
        for(int i=0;i<=num;i++)
            sum+=ans[i];
        printf("%0.2f\n",sum);
    }
    return 0;
}
