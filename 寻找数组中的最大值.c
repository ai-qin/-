//��������a[],����Ԫ�ظ���С��1����100��������ݷ������У���һ��ֻ��һ��������ʾ����Ԫ�ظ������ڶ���Ϊ����ĸ���Ԫ�ء�


#include<stdio.h>
#define N 100
int main()
{ int a[N];
  int i,n,max=0,ans;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
    if(max<a[i])
    { max=a[i];
      ans=i;
    }
  }
  printf("%d %d\n",max,ans);
  return 0;
}
