// Try Q3 using call by value and verify that it doesnt change the value of the said variable.
// Q3 --> WAP to change the value of a variable to ten times of its current value. Write a function by call by value.

int change(int a);

#include<stdio.h>

int main(){
    int i=10;

    printf("The value of i by ten times is %d\n",change(i));

    return 0;
}
int  change(int a){
    int result;
    result = a * 10;
    a= 234;
    return result;
    
    

}
