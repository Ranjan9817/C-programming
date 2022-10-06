
#include <stdio.h>
void Good_morning();
void Good_afternoon();
void Good_night();

int main()
{
    Good_morning();

    return 0;
}

void Good_morning()
{
    printf("Good morning\n");
    Good_afternoon();
}
void Good_afternoon()
{
    printf("Good afternoon\n");
    Good_night();
}
void Good_night()
{
    printf("Good night\n");
}