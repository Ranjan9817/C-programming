// WAP a program to print the address of a variable. Use this address to get the value of this variable.
#include<stdio.h>

int main(){
    int i = 32;
    int *j;
    j = &i;
    printf("The address of the variable i is %d\n",j);
    printf("The value of variable i is %d\n",*j);
    return 0;
}