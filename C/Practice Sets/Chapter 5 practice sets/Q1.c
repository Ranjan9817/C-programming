#include <stdio.h>

float average(int a, int b, int c); // Function prototype

int main()
{
    float d;
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    d = average(a, b, c);
    printf("The value of average is %f", d);

    return 0;
}

float average(int a, int b, int c)
{
    float avg;
    avg =  (float)(a + b + c) / 3;
    return avg;
}