


/**




poj 1083 ˼ά




��Ŀ���⣻��ͼ��ʾ��һ�����ȵ��������200�����䣬���ڸ���һЩ�ɶԵķ����໥�������ӣ���������ÿ��ֻ��ͨ��һ����ˣ�




          Ҳ����˵����������˹����н����ǲ���ͬʱ���˵ģ�Ҫ��������һ�ΰ���10min����������еİ��˵�������ʱ��




����˼·������ÿ�������ж��ٰ��˹�����Ҫ���������ǽ�ȡ���ķ��侭���Ĵ����Ϳ����ˣ�ͦ����˼ά��һ���⡣




*/




#include <stdio.h>




#include <string.h>
#include <algorithm>
#include <iostream>




using namespace std;




 




int n,a[405];




 




int main()




{




    int T;




    scanf("%d",&T);




    while(T--)




    {




        memset(a,0,sizeof(a));




        scanf("%d",&n);




        for(int i=0;i<n;i++)




        {




            int x,y;




            scanf("%d%d",&x,&y);




            if(x>y)swap(x,y);




            if(x%2==0)x--;




            if(y%2==1)y++;




            for(int i=x;i<=y;i++)
            
                 a[i]++;
                 
        }




        int maxx=-1;




        for(int i=1;i<=400;i++)




        {




            maxx=max(maxx,a[i]);




        }




        printf("%d\n",maxx*10);




    }




    return 0;




}
