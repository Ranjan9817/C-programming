#include <stdio.h>

int main()
{
    int num = 2, i = 2;
    int prime = 1;

    while (i < num)
    {
        
        if (num % i == 0)
        {
            prime = 0;
            break;
        }i++;
    }
    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    

    return 0;
}