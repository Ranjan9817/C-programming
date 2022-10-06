// (n-1) + n
#include<stdio.h>

int natural(int num);

int main(){
    int c;
    printf("Enter the natural number to find the sum of the first entered natural numbers\n",c);
    scanf("%d",&c);

    printf("The sum of first %d natural numbers is %d",c,natural(c));
    return 0;
}
int natural(int num){
    if (num==1)
    {
        return 1;
    }
    else
    {
        return num*(num+1)/2;
    }
    
}

