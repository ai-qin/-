//����һ��3��4�е����飬�ҳ��������о���ֵ����Ԫ�ء������Ԫ�ؼ��������±�ֵ�����ж������к���С�ģ����ж���Ļ�����к���С�ġ� 


#include"stdio.h"  

#include"math.h"

#include"stdlib.h"     

//abs( )��Ҫ���ڶ��������ľ���ֵ���ڡ�stdlib.h��(�� <cstdlib>)ͷ�ļ����档

//��fabs( )��Ҫ���󾫶�Ҫ����ߵ�double ��float �͵ľ���ֵ����<cmath>ͷ�ļ���.

//������ֻ#include<cmath>ʱ������ʹ�á� 

int main()

{

int a[3][4]; 

int i,j;

int max;

int max_x,max_y;

for(i=0;i<3;i++)

for(j=0;j<4;j++)

scanf("%d",&a[i][j]);



max=a[0][0];

for( i= 2;i>=0;i--)

for( j = 3;j>=0;j--)

{

if(abs(a[i][j])>=abs(max))

{

max=a[i][j];

max_x=i+1;

max_y=j+1;

}

} 

printf("%d %d %d",abs(max),max_x,max_y);

} 




