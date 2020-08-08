#include <stdio.h>
int main()
{
	int prime[1002],i,j;
	for(i=2;i<1000;i++)
		prime[i]=i;//将数组填满1~1000的数字,由于1不是素数，因此跳过1，从2开始填
		for(i=1;i<1000;i++)
		{
			if(prime[i]!=0)//是否已经归0，像4，6，8，10，12等这些数字，在挖2的倍数的时候已经被归零了，跳过这些数字
			for(j=2;i*j<1000;j++)
			prime[i*j]=0;//挖掉
		}
	for(i=1;i<1000;i++)
		if(prime[i]!=0)
			printf("%d ",prime[i]);//非0的数字输出
	return 0;
}
