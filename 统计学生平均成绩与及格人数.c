//����Ҫ���д���򣬼���ѧ���ǵ�ƽ���ɼ�����ͳ�Ƽ��񣨳ɼ�������60�֣�����������Ŀ��֤����������������ͷ�Χ�ڡ�
//�����ʽ:
//�����ڵ�һ���и����Ǹ�����N����ѧ���������ڶ��и���N���Ǹ�����������Nλѧ���ĳɼ�������Կո�ָ���
//�����ʽ:
//�������¸�ʽ�����
//average = �ɼ���ֵ
//count = ��������
//����ƽ��ֵ��ȷ��С�����һλ��
//��������:
//5
//77 54 92 73 60
//�������:
//average = 71.2
//count = 4
#include<stdio.h>
#include<math.h>
 
int main(void)
{
    int n,i;
    int score;
    int count=0;
    double sum=0.0;
    double ave;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&score);
        sum+=score;
        if(score>=60) count+=1;
    }
    ave = n!=0? sum/n : 0;
    printf("average = %.1lf\n",ave);
    printf("count = %d",count);
	return 0;
}
