/*Write C code that ask will ask the user to
enter the result of 3 x 4, In case the user
entered correct answer the program will
print Thanks, otherwise the program will
print try again until the user enters the
correct answer*/

#include <stdio.h>

int main()
{
    int x = 0;
    int flag = 0 ;
    printf("Enter result 3X4 = ");
    scanf("%d",&x);
    while(flag == 0)
    {
         while(x == 12)
       {
        printf("Thank you");
        flag = 1;
        break;
       }
       if(flag != 1)
       {
        printf("No correct ,Please Try Again : ");
        scanf("%d",&x);
        flag = 0 ;
       }
     }

    return 0;
}
