//��n��������ʹǰ�����˳�������m��λ�ã����m�������ǰ��m������дһ������ʵ�����Ϲ��ܣ���������������n����������������n������

#include <stdio.h>
#include <malloc.h>
int main()
{
    int    *a    = NULL;
    int    *b    = NULL;
    int    N;
    scanf( "%d", &N );   //����N
 
    a = (int *) malloc( N * sizeof(int) );  //���ٿռ��N����
 
    for ( int i = 0; i < N; i++ )   //����N����
        scanf( "%d", &a[i] );
 
    int m;
    scanf( "%d", &m );      //����ת�Ƹ���m
    b = (int *) malloc( m * sizeof(int) );   //���ٿռ��ת����
 
    for ( int i = 0; i < m; i++ )   //��a[] ��Ҫת�Ƶ�m����������һ������ b[]��
    {
        b[i] = a[N - m]; N++;
    }
 
    for ( int j = 9; j >= m; j-- )  //a[] ��ĩβ���ε���ǰһ�������ƶ�N-m�Σ�
        a[j] = a[j - m];
 
    for ( int i = 0; i < m; i++ )  //��b[]�е������ŵ�a[]��ǰ�棻
        a[i] = b[i];
 
    for ( int i = 0; i < 10; i++ )  //���a[];
        printf( "%d ", a[i] );
         
        return (0);
}
