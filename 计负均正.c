//�Ӽ�����������20����������ͳ�����еĸ���������������������ƽ��ֵ��

//������λС��

#include<stdio.h>
int main()
{
    int a[20],num1 = 0,num2 = 0,i;
    double sum = 0.0;
    for(i=0; i<20; i++)
        scanf("%d",&a[i]);
    for(i=0; i<20; i++){
        if(a[i] >= 0){
            sum += a[i];
            num1++;
        }
        else
            num2++;
    }
    printf("%d\n%.2lf\n",num2,sum/num1);
    return 0;
}


