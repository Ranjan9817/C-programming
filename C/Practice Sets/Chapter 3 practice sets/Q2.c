#include <stdio.h>

int main()
{
    float total;
    int phy;
    printf("Enter the phy marks\n");
    scanf("%d", &phy);
    int maths;
    printf("Enter the maths marks\n");
    scanf("%d", &maths);
    int chem;
    printf("Enter the chem marks\n");
    scanf("%d", &chem);

    total = (phy + chem + maths) / 3;

    if (phy < 33 || chem < 33 || maths < 33 || total < 40)
    {
        printf("The Student has failed\n");
    }
    else
    {
        printf("Congratulations you have successfully passed\n");
    }

    return 0;
}