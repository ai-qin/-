//���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ����
//����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У����������λС����
#include <stdio.h>
 
int main(){
    double number;
     
    while((scanf("%lf",&number)!=EOF)){
        if(number<0)
            number=-number;
             
        printf("%.2lf\n",number);
    }
    return 0;
}
