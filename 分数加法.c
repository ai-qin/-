//����2�������������ǵĺͣ���Ҫ���Ϊ�����ʽ��
//�������Ȱ���һ��������T��T<=1000������ʾ��T��������ݣ�Ȼ����T�����ݣ�ÿ�а����ĸ�������a,b,c,d��0<a,b,c,d<1000������ʾ��������a/b �� c/d��
//����ÿ��������ݣ������������e��f����ʾa/b + c/d����򻯽����e/f��ÿ�����ռһ�С�
#include <stdio.h>
int get_gcd(int a,int b);
int main(){
    int T;
    int a;
    int b;
    int c;
    int d;
    int lcm;
    int temp;
    int gcd;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        lcm=b*d/get_gcd(b,d);
        
        temp=(lcm/b*a+lcm/d*c);
        gcd=get_gcd(temp,lcm);
        
        printf("%d %d\n",temp/gcd,lcm/gcd);    
    }        
    return 0;
}
int get_gcd(int a,int b){
    int temp;
    int remainder;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    while(a%b){
        remainder=a%b;
        a=b;
        b=remainder;
    }
    return b;
}
