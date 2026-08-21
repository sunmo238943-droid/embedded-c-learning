#include<stdio.h>
int main(void)
{
    int i;
    for(i=1;i<6;i++)
    {
        printf("%d\n",i);

    }
    int sum = 0;
    
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;  /* 累加：把当前的 i 加到 sum 里 */
    }
    
    printf("%d\n", sum);
    return 0;
}