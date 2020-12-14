
#include <stdio.h>

int main()
{
    int x = 0;
    int i = 1;
    printf("Enter the Number to display the multiplication Table of it :  ");
    scanf("%d",&x);
    for(i = 1 ; i < (x+1) ; i++)
    {
        printf("%d X %d = %d \n",x,i,(x*i));
    }

    return 0;
}
