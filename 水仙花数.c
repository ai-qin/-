//����Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����
//���������ж��飬ÿ��ռһ�У�������������m��n��100<=m<=n<=999����
//����ÿ������ʵ����Ҫ����������ڸ�����Χ�ڵ�ˮ�ɻ���������˵�������ˮ�ɻ���������ڵ���m,����С�ڵ���n������ж������Ҫ���С����������һ���������֮����һ���ո����;
//��������ķ�Χ�ڲ�����ˮ�ɻ����������no;
//ÿ������ʵ�������ռһ�С�
#include <stdio.h>
int main(){
    int a;
    int b;
    int temp;
    int i;
     
    int number1;
    int number2;
    int number3;
    int flag;
     
    while((scanf("%d%d",&a,&b))!=EOF){
        flag=0;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
         
        for(i=a;i<=b;i++){
            number1=i%10;
            number2=i/10%10;
            number3=i/100;
             
            if(i==(number1*number1*number1+number2*number2*number2+number3*number3*number3)){
                if(flag==0)
                    printf("%d",i);
                     
                else
                    printf(" %d",i);
                flag=1;
            }
        }
         
        if(flag==0)
            printf("no");
             
        printf("\n");
    }
     
    return 0;
}
