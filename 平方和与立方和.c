//����һ���������������������������ż����ƽ�����Լ����������������͡�
//�������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n��ɡ�
//����ÿ���������ݣ����һ�У�Ӧ������������x��y���ֱ��ʾ�ö�����������������ż����ƽ�����Լ����������������͡��������Ϊ32λ�������Ա�������
#include <stdio.h>
int main(){
    int a;
    int b;
    int i;
    int temp;
    int oushu_sum;
    int jishu_sum;
     
    while((scanf("%d%d",&a,&b))!=EOF){
        oushu_sum=0;
        jishu_sum=0;
         
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
         
        for(i=a;i<=b;i++){
            if(i%2==0){
                oushu_sum+=(i*i);
            }
             
            else
                jishu_sum+=(i*i*i);
        }
         
        printf("%d %d\n",oushu_sum,jishu_sum);
    }
    return 0;
}
