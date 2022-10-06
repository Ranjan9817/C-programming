#include <stdio.h>
// Q3 Solution
int main()
{
    int num;
    printf("Enter the number to divide \n");
    scanf("%d", &num);

    printf("Divisibility test returns %d \n", num % 97);

    // Q4 Solution
    int x = 2, y = 3, z = 3, k = 1;
    printf("The Value of 3*x/y-z+k is: %d \n", 3*x/y-z+k );
    // 6/3 = 2
    // 2-3 = -1
    // -1+1 = 0

    return 0;
}
