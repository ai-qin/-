//���ĸ��������д�С�����˳������,

#include<stdio.h>
#define xx 4
int main()
{
    int a[xx];
    int b;
    int i,j;
  
    for(i=0;i<xx;i++)
    {
        scanf("%d",&a[i]);    //����
    }
  
    for(j=0;j<xx;j++)        //  ð�ݴ���
    {
        for(i=0;i<xx-1;i++)    //��һ��ð�ݣ�xx-1Ϊ�±꣬�粻��1��a[i+1]�п��ܵ���a[4]��a[4]Ϊ��Ч����
        {
            if(a[i]>a[i+1])
            {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
            }  
        }
    }
  
    for(i=0;i<xx;i++)   //���
    {
        printf("%d ",a[i]);
    }printf("\n");
  
    return 0;
}

