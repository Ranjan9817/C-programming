
#include <stdio.h>

int main()
{
    int length;
    printf("Enter the length of the rectangle\n:");
    scanf("%d", &length);

    int breadth;
    printf("Enter the breadth of the rectangle\n:");
    scanf("%d", &breadth);

    printf("The area of this rectangle is %d\n", length * breadth);

    return 0;
}