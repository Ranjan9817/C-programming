#include<stdio.h>
void printPattern(int n);
int main(){
    int n=3;
    printPattern(n);
    
    return 0;
}
// for 1 - 1 stars
// 2 - 3 stars
//3 - 5 stars
//4 - 7 stars
//(2n-1) Formula
void printPattern(int n){
    if (n==1)
    {
        printf("*\n");
        return;
    }
    printPattern(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*");
        
    }
    printf("\n");
    

    
}
