#include<stdio.h> 
typedef struct point
{
	double x;   //x����
	double y;   //y���� 
}point;         //����� 

int abcd(point p1,point p2,point Q)
{
	double maxx,minx,maxy,miny;
	
	maxx=p1.x>p2.x?p1.x:p2.x;   //���ε��ұ߳� 
	maxx=p1.x>p2.x?p2.x:p1.x;   //���ε���߳�
	maxx=p1.y>p2.y?p1.y:p2.y;   //���ε��ϱ߳� 
	maxx=p1.y>p2.y?p2.y:p1.y;   //���ε��±߳�
	
	if((Q.x-p1.x)*(p2.y-p1.y)==(p2.x-p1.x)*(Q.y-p1.y))
	    return 1;
	else
	    return 0; 
}
//�жϵ��Ƿ����߶��ϣ����ڷ���1�������ڷ���0 

int main(void)
{
	point p1,p2,Q;
	
	printf("Please input the start point of the line:");
	scanf("%f%f",&p1.x,&p1.y);
	printf("\n");
	
	printf("Please input the end point of the line:");
	scanf("%f%f",&p2.x,&p2.y);
	printf("\n");
	
	printf("Please input the point:");
	scanf("%f%f",&Q.x,&Q.y);
	printf("\n");
	
	if(abcd(p1,p2,Q))
	    printf("The point is on the line\n");
	else
	    printf("The point is not on the line\n"); 
}
