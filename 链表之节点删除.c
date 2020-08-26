//����������a��b����ڵ��а���ѧ�š��ɼ�����a������ɾȥb����������ͬѧ�ŵ���Щ�ڵ㡣

#include<stdio.h>
#include<malloc.h>
typedef struct Node
{
    int id;
    int score;
    int length; /*�洢����ĳ���*/ 
    struct Node *next;
}LinkNode;
/*��������*/
LinkNode *CreateList(int len);
/*�������*/ 
void DispList(LinkNode *L);
/*��ȡ��i���ڵ��Ԫ��ֵ*/ 
int GetElem(LinkNode *L,int i);
/*�ҳ���������Ԫ��eֵ��ȵ�Ԫ�ص�λ��*/ 
int LocateElem(LinkNode *L,int e);
/*ɾ������La����Lb��ͬ��Ԫ�صĽڵ�*/
LinkNode *Delnode(LinkNode *La,LinkNode *Lb);
int main()
{
    int a,b;
    LinkNode *La,*Lb,*L;
    scanf("%d%d",&a,&b);
    La=CreateList(a);
    Lb=CreateList(b);
    DispList(Delnode(La,Lb));
    return 0;
}
LinkNode *CreateList(int len)   /*β�巨��������*/ 
{
    LinkNode *L,*p,*r;
    int id,score;
    L=(LinkNode *)malloc(sizeof(LinkNode));
    r=L;
    for(int i=0;i<len;i++)
    {
        p=(LinkNode *)malloc(sizeof(LinkNode));
        scanf("%d%d",&id,&score);
        p->id=id;p->score =score;
        L->length=len;
        r->next=p;
        r=p;
    }
    r->next=NULL;
    return L;
}
void DispList(LinkNode *L)
{
    LinkNode *p=L->next;
    printf("%d\n",L->length); /*���������ʣ��ڵ�ĸ���*/ 
    while(p!=NULL)
    {
        printf("%d %d\n",p->id,p->score);
        p=p->next;
    }
}
int GetElem(LinkNode *L,int i)
{
    LinkNode *p=L;
    for(int j=1;j<=i;j++)
    {
        p=p->next;
    }
    return (p->id);
}
int LocateElem(LinkNode *L,int e)
{
    LinkNode *p=L->next;
    int i=0; 
    /*�˴�i��������Ϊ�˱�ǽڵ��λ��*/ 
    while(p!=NULL)
    {
        if(p->id==e)
            return (i+1);
        p=p->next;
        i++;
    }
    return 0;    
} 
LinkNode *Delnode(LinkNode *La,LinkNode *Lb)
{
    LinkNode *p,*q=Lb->next,*pre;
    int e,i,j,Location=0;
    for(i=1;i<=Lb->length;i++)
    {
        e=GetElem(Lb,i);
        if(Location=LocateElem(La,e))
        {
            p=La->next;pre=La;
            for(j=1;j<Location;j++)
            {
                pre=pre->next;
                p=p->next;
            }
            pre->next=p->next;
            La->length--;
            free(p);
            p=pre->next ;
        }
    }
    return La;
}

