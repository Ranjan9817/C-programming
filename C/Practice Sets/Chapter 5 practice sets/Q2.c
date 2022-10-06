//(celsius*9/5) + 32 = fahrenheit 
#include <stdio.h>
float fahrenheit(int a);
int main()
{
    int a;
    printf("Enter the value of celsius\n");
    scanf("%d",&a);

    printf("The value of celsius in fahrenheit is %f",fahrenheit(a));
    return 0;
}

float fahrenheit(int a)
{
    float fht;
    fht = (a * 9 / 5) + 32;
    return fht;
}