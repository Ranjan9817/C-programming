
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    // printf("The value of a + b is:%d \n", a + b);
    // printf("The value of a - b is:%d \n", a - b);
    // printf("The value of a * b is:%d \n", a * b);
    // printf("The value of a / b is:%d \n", a / b);

    int z;
    z = b * a;
    // b*a = z; Illegal
    printf("The value of z is:%d \n", z);

    printf("5 when divided by 2 leaves a remainder of %d \n", 5 % 2);
    printf("5 when divided by 2 leaves a remainder of %d \n", -5 % 2);

    // There is no operator to perform exponentiation
    printf("The value of 4 to the power 5 is: %f\n", pow(4, 5));

    // printf("The value of 6 + 5.6 is %f \n", 6 + 5.6);     // int and float = float 
    //    printf("The value of 6.0 + 5.6 is %f \n", 6.0 + 5.6); // float and float = float
    // printf("The value of 5/2 is %d \n", 5 / 2);  // int and int = int

    return 0;
}
