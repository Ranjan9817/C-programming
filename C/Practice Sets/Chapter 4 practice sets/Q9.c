#include<stdio.h>

int main(){
    int i=1, n=7, factorial = 1;
    while (i<=n)
    { 
       factorial *=i;
       i++;
    }
    printf("The value of factorial is %d is %d", n, factorial);
    
    
    return 0;
}