 /* ��������a��b�������ǳ�������m���õ�������ȣ����a��b����ģmͬ���aͬ����bģm��
 ������a��b (mod m)��
 ������aͬ����bģm�������a��b��ģmͬ�࣬����         26��2(mod 12)��  */


//��Ŀ����2001��2003�η�����13������
 
#include<stdio.h>
#include<math.h>
 
#define Max 100

void function(int x,int num,int m)
{
	int i = 0,r=0,a[Max];
	while(1)
	{
		r = (int)(pow(x,i+1)) % m;
		a[i] = r;
		i++;
		if(r == 1)
			break;
	}
	printf("%d �� %d ����ģ %d ������Ϊ��%d\n",x,num,m,a[num % i -1]);
} 
  
int main()
{
	int x,num,m;
	
	printf("������x��num���ݣ�");
	scanf("%d%d",&x,&num);
	printf("������ģ��");
	scanf("%d",&m);
 
	function(x,num,m);
 
	return 0;
}
