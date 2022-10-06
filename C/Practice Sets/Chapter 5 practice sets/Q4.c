// Hint: fib(n)= fib(n-1) + fib(n-2)
// fib(1)= 0
// fib(2)= 1

#include<stdio.h>
int fibonacci(int a);
int main(){
    int c;
    c = fibonacci(6);
    printf("The fibonacci series is %d",c);
    return 0;
}

int fibonacci(int a){
    int d,e,f,g;
    if (a==1)
    {
        return 0;
    }
    else if (a==2)
    {
        return 1;
    }
    
    else
    {
        a++;
        return (a-1 + a-2);

    }
    
}