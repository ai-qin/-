//ͳ�Ƹ�����n�����У���������������ĸ�����
// - ����
//���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ����������n��n<100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����Ȼ����n��ʵ�������n=0�����ʾ������������в�������
// - ���
//����ÿ���������ݣ����һ��a,b��c���ֱ��ʾ�����������и�������������ĸ�����
#include <stdio.h>
int main(){
    int n;
    int i;
    int a;
    int b;
    int c;
    double number;
     
    while(1){
        a=0;
        b=0;
        c=0;
        scanf("%d",&n);
         
        if(n==0)
            break;
             
        for(i=0;i<n;i++){
            scanf("%lf",&number);
             
            if(number<0)
                a++;
                 
            else if(number==0)
                b++;
                 
            else
                c++;
        }
         
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
