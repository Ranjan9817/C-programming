/*  Q1
#include<stdio.h>

int main(){
    int a = 10;
    if(a = 11){
        printf("I am 11");
    }
    else{
        printf(" I am not 11");
    }
    return 0;
}
*/

// Q2 Pass or fail question
/*
#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;

    printf("Enter Physics marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths)/3;

    if ((total<40)|| physics<33 || maths<33 || chemistry<33)
    {
        printf("Your total percentage is %f and you are failed\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are passed\n", total);

    }

    return 0;
}
*/

// Q3 Income Tax question
/*
#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your net income tax to be paid by 26th of this month is %f\n", tax);

    return 0;
}
*/

// Q4 Leap Year

/*
#include<stdio.h>

int main(){
    int year;
    printf("Enter the year (4 digit year)\n");
    scanf("%d", &year);

    if (year%4 == 0 || year%100== 0 || year%400==0)
    {
       printf("The year %d is a leap year", year);

    }
    else
    {
        printf("The year %d is not a leap year", year);
    }

    return 0;
}
*/

// Q6 To find greatest of four numbers entered by the user

/*
#include<stdio.h>

int main(){
    int num1,num2,num3,num4;
    printf("Enter your 1st number\n");
    scanf("%d", &num1);

    printf("Enter your 2nd number\n");
    scanf("%d", &num2);

    printf("Enter your 3rd number\n");
    scanf("%d", &num3);

    printf("Enter your 4th number\n");
    scanf("%d", &num4);


    if (num1>num2 && num1>num3 &&num1>num4)
    {
        printf(" The Greatest of four numbers is %d \n", num1);
    }
     if (num2>num1&&num2>num3 && num2>num4)
    {
        printf(" The Greatest of four numbers is %d \n", num2);
    }

     if (num3>num1 && num3>num2 && num3>num4)
    {
        printf(" The Greatest of four numbers is %d \n", num3);
    }


    if (num4>num1 && num4>num2 &&num4>num3)
    {
        printf(" The Greatest of four numbers is %d \n", num4);
    }


    return 0;
}
*/

// Q5 Character is lowercase or not

#include<stdio.h>

int main(){
    // 97-122 = a-z   ASCII values
    char ch;

    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch>=97 && ch<=122)
    {
        printf("It is Lowercase");

    }
    else
    {
        printf("It is not lowercase");
    }
    
    
    return 0;
}