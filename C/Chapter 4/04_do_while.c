/*
#include<stdio.h>

int main(){
    int i = 0;

    do{
        printf("The value of i is %d \n",i);
        i++;
    
    }while (i<10);
    
    return 0;
}
/*








/*
// QUIZ

#include<stdio.h>

int main(){
    int i=0;
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    

    do{
        printf("The number is %d \n", i+1);
        i++;
    }while (i<n);
    
    return 0;
}
*/



#include<stdio.h>

int main(){
    int i=0;
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    do
    {

        printf("The value of i is %d\n", i+1);
        i++;
        
    } while (i<n);
    
    return 0;
}