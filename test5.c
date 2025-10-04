#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int att1, att2;
    int HP1 = 100, HP2 = 100; // 初始化两个玩家的血量

    
    srand((unsigned int)time(NULL));
   
    while(1)
    {

        
        // 生成攻击力 (5-15)
        att1 = rand() % 11 + 5;
        att2 = rand() % 11 + 5;
        
          HP1 = HP1 - att2; // 玩家2攻击玩家1
        HP2 = HP2 - att1; // 玩家1攻击玩家2
     
        if(HP1>0)
        {
            printf("玩家1本回合攻击力为: %d  剩余血量为： %d \n",att1,HP1);        
    
        }
        if(HP2>0)
        {
            printf("玩家2本回合攻击力为: %d  剩余血量为： %d \n",att2,HP2);        
    
        }
        
        // 检查游戏结束条件
        if(HP1 <= 0 && HP2 <= 0)
        {
            printf("Game Over!!! 平局！\n");
            break;
        }
        else if(HP2 <= 0)
        {
             printf("Game Over!!! \n");
            printf("玩家1获胜！\n");
            printf("玩家1剩余血量: %d\n", HP1);
            break;
        
        }
        else if(HP1 <= 0)
        {
            printf("Game Over!!! \n");
            printf("玩家2获胜！\n");
            printf("玩家2剩余血量: %d\n", HP2);
            break;
        }

    
    
    }
}