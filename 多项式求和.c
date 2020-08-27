//����ʽ���������£�
//1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
//������������ö���ʽ��ǰn��ĺ͡�
//����������2����ɣ�������һ��������m��m<100������ʾ����ʵ���ĸ������ڶ��а���m��������������ÿһ������(������Ϊn,n<1000������ö���ʽ��ǰn��ĺ͡�
//����ÿ������ʵ��n��Ҫ���������ʽǰn��ĺ͡�ÿ������ʵ�������ռһ�У��������2λС����
#include <stdio.h>
 
double get_result(int number);
 
int main(){
    int n;
    int number;
     
    scanf("%d",&n);
     
    while(n--){
        scanf("%d",&number);
         
        printf("%.2lf\n",get_result(number));
    }
     
    return 0;
}
 
double get_result(int number){
    int i;
    int temp=1;
    double result=0;
     
    for(i=1;i<=number;i++){
        result+=(1.0/i*temp);
        temp=-temp;
    }
     
    return result;
}
