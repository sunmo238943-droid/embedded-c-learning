#include<stdio.h>
int main(void)
{
    float temp[5];

    temp[0] = 25.1f;
    temp[1] = 26.3f;
    temp[2] = 24.8f;
    temp[3] = 27.0f;
    temp[4] = 25.6f;

    for (int i = 0; i < 5; i++) {
        printf("temp[%d] = %.1f\n", i, temp[i]);

  
}
  return 0;
}
