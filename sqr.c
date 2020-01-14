#include <stdio.h>

// возведение в квадратус
int sqr(int a)
{
    return a*a;
}

// выводит превестивие
void test(void)
{
    printf ("hello everyone\n");
}
// главная фунция
int main (void)
{
    test();
    printf("%d\n", sqr (67));
}