// WAP having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?

#include <stdio.h>
void fnc(int a);

int main()
{
    int i = 5;
    printf("The address of variable i is %u\n", &i);
    fnc(i);
    printf("The address of variable i is %u\n",&i);


    return 0;
}
 void fnc(int a){

   printf("The address of variable a is %u\n",&a);
}
