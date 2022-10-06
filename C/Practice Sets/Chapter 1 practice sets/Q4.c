#include<stdio.h>

int main(){
    int principal=10000;
    int rate=4;
    int year=2;
    int simpleInterest= (principal*rate*year)/100;
    printf("The simple interest is %d",simpleInterest);    
    return 0;
}