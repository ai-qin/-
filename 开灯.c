//��nյ�ƣ����Ϊ1~n����1���˰����еƴ򿪣���2���˰������б��Ϊ2 �ı����Ŀ��أ���Щ�ƽ����ص�������3 ���˰������б��Ϊ3�ı����Ŀ��أ����йص��ĵƽ����򿪣����ŵĵƽ����رգ���
//�������ơ�һ����k���ˣ����������Щ�ƿ��ţ����룺n��k��������ŵĵƱ�š�k��n��1000
//����һ�����ݣ�n��k
//������ŵĵƱ��
#include <stdio.h> 
#include <string.h>
int main(){
    int n;
    int k;
    int flag[1001];
    int i;
    int j;
    scanf("%d%d",&n,&k);
    memset(flag,0,sizeof(int)*1001);
    for(i=1;i<=k;i++){
        for(j=1;j<=n;j++){
            if(j%i==0){
                if(flag[j-1]==0)
                    flag[j-1]=1;
                    
                else
                    flag[j-1]=0;
            }
        }
    }  
    for(i=0;i<n;i++){
        if(flag[i]==1){
            printf("%d",i+1);
            flag[i]=0;
            break;
        }
    }    
    for(i=0;i<n;i++){
        if(flag[i]==1)
            printf(" %d",i+1);
    }   
    printf("\n");   
    return 0;
}
