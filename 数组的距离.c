//��֪Ԫ�ش�С�������е���������x[]��y[]����д��һ�����������������˴�֮���ľ���ֵ����С��һ�������������ľ���

#include<stdio.h>
#include<malloc.h>
void function(int x,int y);
/*===============================================*/
int main()
{
 int x,y;
 
     while(scanf("%d%d",&x,&y)!=EOF)
      {
        function(x,y);
      }
return 0;
}
/*===============================================*/
void function(int x,int y)
 
{
  int *X;
  int Y;
 
     int distance=10000000;    //���ڼ�¼��С����
         X=(int *)malloc(x*sizeof(int)); //Ϊ����X[],���ٿռ�
 
            for(int i=0;i<x;i++)
                scanf("%d",&X[i]);    //����X[],��Ԫ��
 
   for(int j=0;j<y;j++)            //����Y��������С����
   { 
 
      if(distance!=0)     //�������0��������֮������Y����X[]�ľ�����
      {    scanf("%d",&Y);
           for(int i=0;i<x;i++)  //����С����
            {
                if(Y>=X[i]&&(Y-X[i])<distance)   //����Ҫ�ô������ȥС��������Ϊ����������п���Ϊ����
                   distance=Y-X[i];
                     else
                        if(Y<X[i]&&(X[i]-Y)<distance)
                           distance=X[i]-Y;
            }
      }
      else
      scanf("%d",&Y);
   }
  printf("%d\n",distance);
} 
