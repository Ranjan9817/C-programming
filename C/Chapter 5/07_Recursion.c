#include <stdio.h>
int factorial(int x);  //Function Prototype

int main()
{
    int a = 4;
    printf("The value of factorial %d is %d", a, factorial(a));

    return 0;
}

int factorial(int x)    //Function definition and calling
{ printf("Calling factorial %d\n",x);
    if (x == 1 || x == 0)
    {
        return 1; //Base condition
    }
    else
    {
        return  factorial(x - 1) * x;
    }
}
