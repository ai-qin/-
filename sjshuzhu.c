#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    int i,j;
    int temp;   //һ���м���������ڱ����5������
    int nums[N];
    for(i=0;i<N;i++){
        scanf("%d",&nums[i]);
    }
     temp = nums[N-1];   //����õ�5����ֵ 
    for(i=N;i>0;i--){
        nums[i] = nums[i-1];  //ǰһ��Ԫ�ص�ֵ����һ������ 
    }
 
    nums[0] = temp;   //�ѵ�һ��Ԫ�ظĳ����һ��Ԫ�� 
    for(i=0;i<N;i++)
    {
        printf("%-2d",nums[i]);
    }
    return 0;
}
