#include<stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c,p,s;
	printf("�����������ε����߳�\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	p=1.0/2*(a+b+c);  
    if(a+b>c&&b+c>a&&a+c>b){
	    s=sqrt(p*(p-a)*(p-b)*(p-c)); 
        printf("�����ε����Ϊ��%7.2f\n",s); 
    } 
    else 
        printf("���ܹ���������\n");
 } 
