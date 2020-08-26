#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
typedef struct{
	double x;
	double y;
}Point;
typedef struct{
	Point A,B;
}Line;
// �߶�L��C��λ�ù�ϵ
// ����ֵ��>0��C��L��˳ʱ�뷽���·�����<0��C��L����ʱ�뷽���Ϸ�����=0ͬ��
double PointLineLocation(Point &C, Line &L) {
	double AB_x,AB_y; //ʸ��AB
	double AC_x,AC_y; //ʸ��AC
	AB_x=L.A.x-L.B.x; AB_y=L.A.y-L.B.y; //ʸ��A->B
	AC_x=L.A.x-C.x;   AC_y=L.A.y-C.y;   //ʸ��A->C

	return AB_x*AC_y-AB_y*AB_x; //ʸ��AB��AC���
}
int Intersection(Line &L1, Line &L2) { //L1��L2�Ƿ��ཻ
	//�����ų�
	if ( max(L1.A.x, L1.B.x)<min(L2.A.x, L2.B.x) ) return 0;
	if ( max(L1.A.y, L1.B.y)<min(L2.A.y, L2.A.y) ) return 0;
	if ( max(L2.A.x, L2.B.x)<min(L1.A.x, L1.A.x) ) return 0;
	if ( max(L2.A.y, L2.B.y)<min(L1.A.y, L1.A.y) ) return 0;
	
	//����ʵ��
	if ( PointLineLocation(L1.A, L2)*PointLineLocation(L1.B, L2)>0 ) //L1�����˵㶼��L2��ͬ��
		return 0;
	if ( PointLineLocation(L2.A, L1)*PointLineLocation(L2.B, L1)>0 ) //L2�����˵㶼��L1��ͬ��
		return 0;

	return 1; //�ཻ 
	          //<0��ʾA B��CD�����C D��AB���࣬=0��ʾ������� AB��CD��ֱ 
}

int main(void)
{
	Line M,N;
	printf("Please input the 2 points on the first line:");
	scanf("%f%f%f%f",&M.A.x,&M.A.y,&M.B.x,&M.B.y);
	printf("\n");
	
	printf("Please input the 2 points on the second line:"); 
	scanf("%f%f%f%f",&N.A.x,&N.A.y,&M.B.x,&N.B.y);
	printf("\n");
	
	if(Intersection(M,N))
	    printf("�����߶��ཻ\n");
	else
	    printf("�����߶β��ཻ\n");
 } 
