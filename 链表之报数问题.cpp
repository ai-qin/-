//��n����Χ��һȦ��˳���1��ʼ�źš��ӵ�1���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��Ҫ����ѭ������ʵ�֡�

#include<stdio.h>
#include<stdlib.h>


typedef struct L {
    int a;                                            //��Ա�ı��
    int *Next;
} l;


int main() {
    int n, i;
    l *Head =NULL;
 
    scanf("%d", &n);


    for( i=1; i<=n; i++) {                                //ֱ�Ӹ���ô�������ֵ
        l *p = (l*)malloc(sizeof(l));
        p->a = i;
        p->Next = NULL;
        l *last = Head;
        if(last) {                                    //�ж��ǲ���ͷ�ڵ�
            while(last->Next ) {
                last = last->Next ;
            }
            last->Next = p;
        } else {
            Head = p;
        }
    }


    l *tmp;
    int j = 1;
    while(n!=1) {                                           //ѭ���жϵ�ֻ��һ���˵�ʱ�����
        tmp = Head;
        for( tmp; tmp; tmp=tmp->Next ) {
            if(tmp->a !=0) {                       //�����е�ֵ��0�������������
                if(j==3) {
                    tmp->a = 0;            //�ѱ��Ϊ3�������е�ֵ��0
                    j=0;                    //�������
                    n--;                    //������һ
                }
                j++;                           //��ż�һ
            }
        }
    }


    l *t = Head;
    for( t; t; t=t->Next ) {                            //���������е�ֵ���Ѳ���0��ֵ���
        if(t->a !=0) {
            printf("%d", t->a );
        }
    }
 
    return 0;
}

