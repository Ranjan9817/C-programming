#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the first number\n");
    scanf("%d", &num1);

    int num2;
    printf("Enter the second number\n");
    scanf("%d", &num2);

    int num3;
    printf("Enter the third number\n");
    scanf("%d", &num3);

    int num4;
    printf("Enter the fourth number\n");
    scanf("%d", &num4);

if (num1>num2 && num1>num3 && num1>num4)
{
    printf("The first number %d is the greatest number\n", num1);
}

if (num2>num1 && num2>num3 && num2>num4)
{
    printf("The second number %d is the greatest number\n",num2);
}

if (num3>num1 && num3>num2 && num3>num4)
{
    printf("The third number %d is the greatest number\n",num3);
}

if (num4>num1 && num4>num2 && num4>num3)
{
    printf("The fourth number %d is the greatest number\n",num4);
}
    return 0;
}