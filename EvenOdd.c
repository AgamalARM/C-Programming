#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;

    printf("Enter the Number : ");
    scanf("%d",&number);
    if ((number % 2) == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("number is Odd");

    }

    return 0;
}
