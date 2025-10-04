#include <stdio.h>
int main()
{
  printf("请分别输入三个物体的重量");
  float a,b,c;
  scanf("%f%f%f",&a,&b,&c);
  if(a>b&&a>c)
  {
    printf("%.2f",a);
  }
  else if(b>a&&b>c)
  {
    printf("%.2f",b);
  }
  else
  {
    printf("%.2f",c);    
  }
  return 0;
}