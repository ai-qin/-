//小时候学过的九九乘法表也许将会扎根于我们一生的记忆,现在让我们重温那些温暖的记忆,请编程输出九九乘法表.
//现在要求你输出它的格式与平常的 不同啊! 是那种反过来的三角形啦，具体如下图：
//每两个式子之前用一个空格 隔开。
//第一有一个整数N，表示有N组数据（N<10）接下来由N行，每行只有一个整数M(1<=M<=9);
//对应每个整数M，根据要求输出乘法表的前N行,具体格式参见输入输出样例和上图.每两组测试数据结果之间有一个空行隔开，
#include <stdio.h>
#include <math.h>
int main(){
    int T;
    int n;
    int i;
    int j;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);      
        for(i=1;i<=n;i++){
            for(j=i;j<=9;j++){
                if(j!=i)
                    printf(" ");     
                printf("%d*%d=%d",i,j,i*j);
            }
            printf("\n");
        }
        if(T!=0)
            printf("\n");    
    }
    return 0;
}
