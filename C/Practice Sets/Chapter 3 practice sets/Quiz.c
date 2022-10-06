#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100)
    {
     printf("The Student has A grade");
    }
    else if (marks>=80 && marks<90)
    {
      printf("The Student has B grade");
    }
     else if (marks>=70 && marks<80)
    {
      printf("The Student has C grade");
    }
     else if (marks>=60 && marks<=70)
    {
      printf("The Student has D grade");
    }
    else
    {
      printf("The Student has F grade");

    }
    
    return 0;
}










































































/*
#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks>=90 && marks<=100)
    {
        printf("The Student has A grade");

    }
    else if (marks>=80 && marks<90)
    {
      printf("The Student has B grade");
    }

    else if (marks>=70 && marks<80)
    {
      printf("The Student has C grade");
    }
      else if (marks>=60 && marks<70)
    {
      printf("The Student has D grade");
    }
    else if (marks<70)
    {
        printf("The Student has F grade");
    }
    
    
    return 0;
}
*/