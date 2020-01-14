#include <stdio.h>
int main (void)
{
    char b [] = "#";
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%s", b);
        }
        printf("\n");
    }
}