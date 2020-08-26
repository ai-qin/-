#include<stdio.h>
typedef struct{
	double x;
	double y;
}Point;
typedef struct{
	Point A,B;
}Line;
// ����ֵ��>0�������߶ε�˳ʱ�뷽���·�����<0�������߶ε���ʱ�뷽���Ϸ�����=0�����߶��� 
double PointLineLocation(Point &E, Line &L) {
	double AB_x,AB_y; //ʸ��AB
	double AE_x,AE_y; //ʸ��AE
	AB_x=L.A.x-L.B.x; AB_y=L.A.y-L.B.y; //ʸ��A->B
	AE_x=L.A.x-E.x;   AE_y=L.A.y-E.y;   //ʸ��A->E

	return AB_x*AE_y-AB_y*AE_x; //ʸ��AB��AE���
}

int main (void)
{
	Line AB,CD,DA,BC;
	Point E;
	printf("������������ε��ĸ�����ABCD���꣺");
	scanf("%f%f%f%f%f%f%f%f",&AB.A.x,&AB.A.y,&AB.B.x,&AB.B.y,&CD.A.x,&CD.A.y,&CD.B.x,&CD.B.y);
	printf("\n");
	
	printf("������������ε��ĸ�����DABC���꣺");
	scanf("%f%f%f%f%f%f%f%f",&DA.A.x,&DA.A.y,&DA.B.x,&DA.B.y,&BC.A.x,&BC.A.y,&BC.B.x,&BC.B.y);
	printf("\n");
	
	printf("������һ��������꣺");
	scanf("%f%f",&E.x,&E.y);
	printf("\n");
	
    if((PointLineLocation(E,AB)*PointLineLocation(E,CD)>=0)&&(PointLineLocation(E,DA)*PointLineLocation(E,BC)>=0))
        printf("���ΰ����õ�");
	else
	    printf("���β������õ�"); 
    
}
