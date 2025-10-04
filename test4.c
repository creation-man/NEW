//生成一个随机数，猜测这个数字的大小（范围0 - 99），并每次提示猜测数字是过大还是过小
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b,c;
    srand((unsigned int)time(NULL));
    a = rand() % 100;
    printf("请输入数字：");
    scanf("%d",&b);
    while(b != a)
    {
        if(b > a)
        {
            printf("数字过大，请重新输入：");
            scanf("%d",&b);
        }
        else
        {
            printf("数字过小，请重新输入：");
            scanf("%d",&b);
        }
    }
    printf("恭喜你，猜对了！");
    return 0;
}


