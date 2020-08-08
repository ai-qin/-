#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d %d",&a,&b);//输入数字 
 
    if(a < b)
    { 
        r = a;
        a = b;
        b = r;
    }
    
    while(r != 0)//循环，求出最大公约数 
    {
        r = a % b;
        a = b;
        b = r;
    }
 
   printf("最大公约数：%d\n",b);
   return 0;
}
