/*
#include<stdio.h>
//sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // Function prototype declaration


int main(){
    int c;
    c = sum(2,15); //Function call
    printf("The value of c is %d\n",c);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}
*/

#include <stdio.h>
// To multiply two numbers using function
int mul(int a, int b); // Parameters

int main()
{
    int c;
    c = mul(2, 5); // Arguments
    printf("The value after multiplication is %d", c);
    return 0;
}
int mul(int a, int b)
{
    int result = a * b; 
    return result;
}
