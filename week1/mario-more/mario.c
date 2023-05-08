#include <cs50.h>
#include <stdio.h>

int main(void)
// left align
{
    int pyramid;
    do
    {
        pyramid = get_int("Height: ");
    } while (pyramid < 1 || pyramid > 8);

    for (int i = pyramid - 1; i >= 0; i--)
    {
        // loop for printind blank spaces
        for (int r = i - 1; r >= 0; r--)
        {
            printf(" ");
        }
        
        for (int j = 0; j < pyramid - i; j++)
        {
            printf("#");
        }

        for (int k = 0; k < 2; k++)
        {
            printf(" ");
        }
        for (int l = 0; l < pyramid - i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
