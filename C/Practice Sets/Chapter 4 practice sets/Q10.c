#include <stdio.h>

int main()
{
    int num , prime =1;
    printf("Enter your number to check whether it is prime or not\n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
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