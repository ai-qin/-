//����һ��Ӣ�ľ��ӣ���ÿ�����ʵĵ�һ����ĸ�ĳɴ�д��ĸ��
//�������ݰ����������ʵ����ÿ������ʵ����һ�����Ȳ�����100��Ӣ�ľ��ӣ�ռһ�С�
//���������Ҫ���д���Ӣ�ľ��ӡ�
#include <stdio.h>
#include <ctype.h>
 
int main(){
    char c;
    int flag;
     
    while((scanf("%c",&c))!=EOF){
        flag=1;
         
        while(c!='\n'){
            if(islower(c)!=0 && flag==1){
                c=toupper(c);
                flag=0;
            }
             
                 
            if(c==' ')
                flag=1;
             
            printf("%c",c);
             
            c=getchar();
        }
         
        printf("\n");
    }
    return 0;
}
