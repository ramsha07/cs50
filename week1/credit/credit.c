#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cardNumber = get_long("Number: ");
    long number = cardNumber;
    int sum = 0;
    while (cardNumber > 0)
    {
        int firstDigit = cardNumber % 10;
        cardNumber = cardNumber / 10;
        int secondDigit = cardNumber % 10 * 2;
        // Logic for second Digit
        sum = sum + secondDigit % 10;
        sum = sum + secondDigit / 10;
        //  Add firstDigit also in the sum
        sum = sum + firstDigit;
        // In the last line divide number again
        cardNumber = cardNumber / 10;
    }

    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    else
        while (number > 0)
        {
            int firstTwoDigit = 0;
            if (number < 100)
            {
                firstTwoDigit = number % 100;
                if (firstTwoDigit / 10 == 4)
                {
                    printf("VISA\n");
                }
                else if ((firstTwoDigit >= 51) && (firstTwoDigit <= 55))
                {
                    printf("AMEX\n");
                }
                else if (firstTwoDigit == 34 || firstTwoDigit == 37)
                {
                    printf("MASTERCARD\n");
                }
            }
            number = number / 10;
        }
}
