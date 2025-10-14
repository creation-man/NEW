#include "stdio.h"
#include "math.h"

#define PI 3.1415926
int main()
{
    // printf("请输入身高：");
    // int height;
    // scanf("%d", &height);
    // printf("请输入体重：");
    // int weight;
    // scanf("%d", &weight);
    // printf("您的BMI指数为：%f\n", (float)weight / (height * height) * 10000.0);


    
    printf("请输入vx:");
    int vx;
    scanf("%d", &vx);
    printf("请输入vy:");
    int vy;
    scanf("%d", &vy);
    double a=0,b=0,c=0,d=0;
   
    a=-vx * cos(PI/4) + vy*sin(PI/4);
    b=-vx * sin(PI/4) - vy*cos(PI/4);
    c=vx * sin(PI/4) - vy*cos(PI/4);
    d=vx * cos(PI/4) + vy*sin(PI/4);

    printf("a=%f\nb=%f\nc=%f\nd=%f\n",a,b,c,d);


    return 0;
}