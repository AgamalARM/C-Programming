#include <stdio.h>

int main()
{
    int id;

    printf("Please Enter your Id : ") ;
    scanf("%d",& id);

    switch(id)
    {
    case 1234 :
        printf("Welcome Ahmed");
        break;
    case 5678 :
       printf("Welcome Ali");
       break;
    case 1120 :
       printf("Welcome Shwkat");
       break;
    default :
        printf("Wrong ID");
        break;
    }
    return 0 ;
}
