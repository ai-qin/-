//��һ������ż��n(2<= n <=10000),��Ҫ�����ǣ��Ȱ�1��n�е�����������С����������ٰ����е�ż����С��������� 
//��һ����һ������i��2<=i<30)��ʾ�� i ��������ݣ�ÿ����һ������ż��n��
//��һ��������е��������ڶ���������е�ż��.
#include <stdio.h>
int main(){
    int T;
    int i;
    int n;    
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            if(i%2==1){
                if(i==1)
                    printf("%d",i);
                
                else
                    printf(" %d",i);
            }
        }   
        printf("\n");    
        for(i=1;i<=n;i++){
            if(i%2==0){
                if(i==2)
                    printf("%d",i);
                
                else
                    printf(" %d",i);
            }
        }
        printf("\n");
        if(T!=0)
            printf("\n");
    }
    return 0;
}
