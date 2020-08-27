//给你三个点，表示一个三角形的三个顶点，现你的任务是求出该三角形的面积
//每行是一组测试数据，有6个整数x1,y1,x2,y2,x3,y3分别表示三个点的横纵坐标。（坐标值都在0到10000之间）输入0 0 0 0 0 0表示输入结束。测试数据不超过10000组
//输出这三个点所代表的三角形的面积，结果精确到小数点后1位（即使是整数也要输出一位小数位
#include <stdio.h>
#include <math.h>

int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    double s;
    
    while(1){
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        
        if(x1==0 && y1==0 && x2==0 && y2==0 && x3==0 && y3==0)
            break;
                
        s=fabs((double)x1*y2-x2*y1+x3*y1-x1*y3+x2*y3-x3*y2)/2;
    
        printf("%.1lf\n",s);
    }
    
    return 0;
}
