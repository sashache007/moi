#include <stdio.h>
int main (void)
{
    float C, F;
    F = 567;
    printf("Сотрите я могу пересчитать темпу из Пендосов в остальной мир!\n");
    printf("Пендосы\t   Мир\n");
    for ( ; F >= 0; F-=17)
    {
        C = 5 * (F-32) / 9;
        printf("%3.1f\t%6.1f\n",F, C);
    }
}

