#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cardNumber = 378282246310005;
    int sum = 0;
    while (cardNumber > 0)
    {
        int firstDigit = cardNumber % 10; // 4
        cardNumber = cardNumber / 10;     // 123
        int secondDigit = cardNumber % 10 * 2;
        // Logic for second Digit
        sum = sum + secondDigit % 10;
        secondDigit = secondDigit / 10;
        sum = sum + secondDigit % 10;
        //  Add firstDigit also in the sum
        sum = sum + firstDigit;
        // In the last line divide number again
        cardNumber = cardNumber / 10;
    }
    printf("%d \n", sum);

    if (sum % 10 == 0)
    {
        printf("Valid\n");

        while (cardNumber > 0)
        {
            int firstTwodigit = 0;
            if (cardNumber < 100)
            {
                firstTwodigit = cardNumber % 100;
                if (firstTwodigit % 10 == 4)
                {
                    printf("Visa\n");
                }
                else if ((firstTwodigit == 51) || (firstTwodigit == 52) || (firstTwodigit == 53) || (firstTwodigit == 54) || (firstTwodigit == 55))
                {
                    printf("American\n");
                }
                else if (firstTwodigit == 34 || firstTwodigit == 37)
                {
                    printf("master\n");
                }
            }
            cardNumber = cardNumber / 10;
        }
    }
    else
    {
        printf("Invalid\n");
    }
}
