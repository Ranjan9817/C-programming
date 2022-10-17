// WAP to print the value of a variable i by using "pointer to pointer" type of variable.
#include<stdio.h>

int main(){
    int i = 43;
    int *j;
    j = &i;

    int **k;
    k = &j;
    printf("The value of variable i by using pointer to a pointer is %d\n",**k);
    return 0;
}