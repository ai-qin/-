//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����

#include<stdio.h>
int main()
{
    int letter = 0,number = 0,blank = 0,others = 0,c;        //�ֱ�Ϊ��ĸ�����֡��ո�����
    while((c = getchar()) != '\n'){
        if(c >= 'A' && c<='Z' || c >= 'a' && c <= 'z')    //�ж��Ƿ�Ϊ��ĸ
            letter++;
        else if(c >= '0' && c <= '9')                     //�ж��Ƕ�Ϊ����
            number++;
        else if(c == ' ')                                 //�ж��Ƿ�Ϊ�ո�
            blank++;
        else                                              //����
            others++;
    }
    printf("%d %d %d %d\n",letter,number,blank,others);
    return 0;
}

