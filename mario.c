#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("How tall do you want the pyramid, value 1-8\n");
    }
    while (height < 1 || height > 8);

    for (int row = 1; row <= height; row++)
    {
        for (int blank = (height - row); blank >= 0; blank--)
        {
            printf(" ");
        }
        for (int hash = 1; hash <= row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
