/*����ĳ���������ĳһ����b��Ҫ��ɾ�������п��Ա�b����������Ԫ�أ�ͬʱ���������Ԫ�ذ���С��������
�������Ԫ����ֵ��A��Z��ASCII֮�䣬�滻Ϊ��Ӧ��ĸ��Ԫ�ظ���������100��b��1��100֮�䡣 */

#include <stdio.h>
int main(){
    int n,b,a[100],j=0;
    scanf("%d %d",&n,&b);
    for(int i=0,temp;i<n;i++){
        scanf("%d",&temp);
        temp%b!=0?a[j++]=temp:0;
    }
    for(int i=0;i<n-1;i++){
        int temp=i;
        for(int k=i+1;k<n;k++){
            if(a[temp]>a[k])
                temp=k;
        }
        int swap=a[temp];
        a[temp]=a[i];
        a[i]=swap;
        if(a[i]>='A'&&a[i]<='Z')
            printf("%c ",a[i]);
        else
            printf("%d ",a[i]);
    }
    return 0;
}
