#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d %d",&a,&b);//�������� 
 
    if(a < b)
    { 
        r = a;
        a = b;
        b = r;
    }
    
    while(r != 0)//ѭ����������Լ�� 
    {
        r = a % b;
        a = b;
        b = r;
    }
 
   printf("���Լ����%d\n",b);
   return 0;
}
