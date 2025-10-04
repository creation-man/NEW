#include  <stdio.h>
int main()
{
   int floor;
   printf("请输入整数N作为金字塔层数： ");
   scanf("%d",&floor);
   for(int i=1; i<=floor; i++)
   {
      for(int j=floor; j>=i; j--)
      {
         printf(" ");
      }
      // 打印星号
        for(int n = 1; n <= 2 * i - 1; n++) {
            printf("*");
        }
      printf("\n");
   }
}