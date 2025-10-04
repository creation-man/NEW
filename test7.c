#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[10];
    srand((unsigned int)time(NULL));
    
    
    for(int i=0; i<10; i++)
    {
        a[i] = rand() % 101 ;  
    }
    
    
    for(int i=0; i<9; i++)  
    {
        for(int j=0; j<9-i; j++)  
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }   
        }
    }
    
   
    for(int i=0; i<10; i++)
    {
        printf("%d\n", a[i]);
    }
    
    return 0;
}