/*ɾ�������е�0Ԫ��
��д����CompactIntegers��ɾ������������ֵΪ0��Ԫ�أ����Ԫ���������׶��ƶ���ע�⣬CompactIntegers������Ҫ�������鼰��Ԫ�ظ�����Ϊ��������������ֵӦΪɾ������ִ�к��������Ԫ�ظ����� 
����ʱ���ȶ������鳤�ȣ������ζ���ÿ��Ԫ�ء� 
�����ô˺�����õ�������ͺ�������ֵ�����*/ 

#include<stdio.h>
void  CompactIntegers(int a[],int x); 
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];     //����һ��n��Ԫ�ص�����  
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    CompactIntegers(array,n);
    return 0;
}
void  CompactIntegers(int a[],int x)
{
    int i,cnt=0;
    for(i=0;i<x;i++)
        if(a[i])        //Ԫ��Ϊ1�������������Ҽ���������1�� 
        { 
            printf("%d ",a[i]);
            cnt++; 
        }
    printf("\n%d\n",cnt);    
}
