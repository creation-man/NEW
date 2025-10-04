//霜之哀伤
#include <stdio.h>
int Weapon (int Power)
{
  int Actual_damage =256 * (Power + 100)/100;
  return Actual_damage;
}
 int main()
{
    int actual_damage,power;
    printf("输入玩家的力量:");
    scanf("%d",&power);
    actual_damage=Weapon(power);
    printf("武器最大实际攻击力为:%d",actual_damage);
    return 0;
}
