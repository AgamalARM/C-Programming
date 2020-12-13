#include <stdio.h>

int main()
{
    int hours= 0;
    int deduction = 10;
    int salary = 0;

    printf("Enter Your Working hours : ");
    scanf("%d",&hours);
    if (hours < 40)
    {
        salary = (hours * 50)- ((hours * 50) / deduction);
        printf("Your Salary is %d",salary);
    }
    else
    {
        salary = (hours * 50);
        printf("Your Salary is %d",salary);

    }

    return 0;
}
