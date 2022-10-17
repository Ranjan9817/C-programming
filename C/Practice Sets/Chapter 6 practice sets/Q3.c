// WAP to change the value of a variable to ten times of ts current value. Write a function and pass the value by reference.
#include <stdio.h>
int var(int *a);

int main()
{
    int i = 10;
    printf("The value of variable i before changing is %d\n", i);
    var(&i);
    printf("The value of variable i after changing is %d\n", i);
    return 0;
}

int var(int *a)
{
    int temp;
    temp = *a;
    *a = temp * 10;
    return *a;
}
