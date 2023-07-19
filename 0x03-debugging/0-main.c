#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int positive_or_negative(int n)
{
        if (n > 0)
                printf("%i is positive\n", n);
        else if (n == 0)
                printf("%i is zero\n", n);
        else
                printf("%i is negative\n", n);
}               
int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
