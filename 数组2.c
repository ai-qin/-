/*�����10��Ԫ�ص�һά������������������0�ĸ���*/
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
	printf("������%d��.",ze);
      printf("������%d��.",fu);
      printf("��0������%d��.",zero);
	return 0;
 } 
