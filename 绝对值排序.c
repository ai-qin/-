//����n(n<=100)�����������վ���ֵ�Ӵ�С������������Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�

#include <stdio.h>
#include <math.h>                     //��������ֵ������ͷ�ļ�
int main()
{
    int i,j,swap,k;                           //swapΪ������
    int a[100][100]={0};
    int size[100];                            //��ÿ���ж��ٸ���
    for(k=0;scanf("%d",&size[k])&&size[k];k++)//k��ʾ�ľ��ǵڼ���  a[i][j]��ʾ��i�е�j������������Ƴ��ȵ�����
    {    
        for(i=0; i<size[k]; i++)
        {
            scanf("%d",&a[k][i]);
        }
        for(i=0; i<size[k]-1; i++)             //ð�ݷ��ȽϾ���ֵ�Ĵ�С��������
        {
            for(j=0; j<(size[k]-i-1); j++)
            {
                if(abs(a[k][j+1]) > abs(a[k][j]))
                {
                    swap = a[k][j+1];
                    a[k][j+1] = a[k][j];
                    a[k][j] = swap;
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<size[i];j++)
        {
            printf("%d ",a[i][j]);             //���
        }
        printf("\n");
    }
    return 0;
}
