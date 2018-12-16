


/**




poj 1083 思维




题目大意；如图所示在一条走廊的两侧各有200个房间，现在给定一些成对的房间相互交换桌子，但是走廊每次只能通过一组搬运，




          也就是说如果两个搬运过程有交叉是不能同时搬运的，要依次来，一次搬运10min，问完成所有的搬运的最少用时。




解题思路：考虑每个房间有多少搬运过程需要经过，我们截取最大的房间经过的次数就可以了，挺锻炼思维的一道题。




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
