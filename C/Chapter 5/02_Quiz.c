/*
#include<stdio.h>
void Good_morning(); // Function prototype
void Good_afternoon();
void Good_night();


int main(){
    Good_morning();  // Function call
    Good_afternoon();
    Good_night();
    return 0;
}

void Good_morning(){
    printf("Good morning\n"); // Function Declaration
}
void Good_afternoon(){
    printf("Good afternoon\n");
}
void Good_night(){
    printf("Good night\n");
}
*/

#include<stdio.h>
void Good_morning();
void Good_Afternoon(); // Function prototype
void Good_night();


int main(){
    Good_morning();
    Good_Afternoon();
    Good_night();
    return 0;
}

void Good_morning(){
    printf("Good morning\n");    
}
void Good_Afternoon(){
    printf("Good Afternoon\n");    
}
void Good_night(){
    printf("Good night\n");    
}