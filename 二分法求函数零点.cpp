/*�к�����
f(x) = x5 - 15 * x4+ 85 * x3- 225 * x2+ 274 * x - 121
��֪ f(1.5) > 0 , f(2.4) < 0 �ҷ��� f(x) = 0 ������ [1.5,2.4] ����ֻ��һ���������ö��ַ�����ø�
���:
�÷���������[1.5,2.4]�еĸ���Ҫ���������뵽С�����6λ��*/

#include<stdio.h>
#include<math.h>
double f(double x);
void search(double a,double b);
int main(void)
{
	search(1.5,2.4);
}

double f(double x)
{
	return pow(x,5)-15*pow(x,4)+85*pow(x,3)-225*x*x+274*x-121;
}

void search(double a,double b)
{
	double middle,result;
	middle=(a+b)/2;
	result=f(middle);
	if(result>0.000001)
	    search(middle,b);
	else if(result<-0.000001)
	    search(a,middle);
	else
	    printf("%.6lf",middle);
}
