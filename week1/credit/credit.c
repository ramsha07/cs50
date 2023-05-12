#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = 1234;
    int sum;
    int digit;
    int multiply1;
    int multiply;
    int multiply2;

    while (number > 0)
    {
        int digit1 = number % 10;//4
        number = number / 10;//123
        multiply = number % 10 * 2;//3*2=6
          printf("%d\n",multiply);
    //     if (multiply >= 10)
    //     {
    //         multiply1 = multiply % 10;
    //         multiply2 = multiply / 10;
    //         sum = multiply1 + multiply2 % 10+digit1;
    //         // sum =+sum;
    //         printf ("%i\n", sum);
    //     }
    //     else
    //     {
    //           sum = multiply+ digit1;
    //     sum =+sum;
    //     }
        number = number / 10;//123/10 =12

    }



    // if (sum % 10 == 0)
    // {

    //     while (number > 0)
    //     {
    //         int firstTwodigit;
    //         if (number < 100)
    //         {
    //             firstTwodigit = number % 100;
    //             if ((firstTwodigit == 51) ||(firstTwodigit== 52) ||(firstTwodigit== 53) ||(firstTwodigit== 54))
    //             {
    //                 printf("American\n");
    //             }
    //             else if (firstTwodigit == 34 || firstTwodigit == 37)
    //             {
    //                 printf("master\n");
    //             }
    //             else if (firstTwodigit == 4)
    //             {
    //                 printf("Visa\n");
    //             }
    //         }
    //         number = number / 10;
    //     }

    // }
    // else
    //     {
    //         printf("invalid\n");
    //     }
}
