#include <stdio.h>

int main()
{
    // 97-122 = a-z
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch>=97 && ch<=122)
    {
        printf("The entered character is lowercase\n");

    }
    else
    {
        printf("The entered character is uppercase\n");
    }
    
    

    return 0;
}