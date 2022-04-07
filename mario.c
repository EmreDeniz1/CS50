#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Yükseklik: ");
    }
    while (n<1 || n>8);

    for (int i = 1; i <= n; i++)
    {
        for (int j= 0; j < n-i ; j++)
        {
            printf(".");
        }
            for (int x=0; x<i; x++ )
            {
                printf("#");
            }

    printf("\n");
    }
}