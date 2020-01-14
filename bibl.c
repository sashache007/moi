#include <stdio.h>
int main (void)
{
    int c = 0;
    while (getchar() !=EOF)
    ++c;
    printf("%i\n", c);
}