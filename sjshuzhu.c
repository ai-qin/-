#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    int i,j;
    int temp;   //一个中间变量，用于保存第5个数据
    int nums[N];
    for(i=0;i<N;i++){
        scanf("%d",&nums[i]);
    }
     temp = nums[N-1];   //保存好第5个数值 
    for(i=N;i>0;i--){
        nums[i] = nums[i-1];  //前一个元素的值将下一个覆盖 
    }
 
    nums[0] = temp;   //把第一个元素改成最后一个元素 
    for(i=0;i<N;i++)
    {
        printf("%-2d",nums[i]);
    }
    return 0;
}
