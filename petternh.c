#include <stdio.h>
int main()
{

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 3 || i == 3 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}