/*求具有10个元素的一维数组中正数，负数和0的个数*/
#include<stdio.h>
#define N 10
int main()
{
	int tt[N];
	int i;
	int fu=0,ze=0,zero=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&tt[i]);
		if(tt[i] == 0){
            zero++;
        }
        else if(tt[i] > 0){
             ze++;
        }
        else
           fu++;
	}
	printf("正数有%d个.",ze);
      printf("负数有%d个.",fu);
      printf("是0的数有%d个.",zero);
	return 0;
 } 
