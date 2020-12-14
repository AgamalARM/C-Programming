/******/
#include <stdio.h>

void main(void)
{
    int id,pass;
    int k = 0;
    int flag = 0;
    printf("Please Enter Your ID : ");
    scanf("%d",&id);
    if (id == 1234 || id == 4567 || id == 8970)
    {
        do
        {
            if(flag == 0)
            {
                printf("Please Enter Your Password : ");
               scanf("%d",&pass);
            }


        if(id == 1234 && pass == 7788)
        {
            printf("welcome Ahmed");
            break;
        }


        if(id == 4567 && pass == 9900)
        {
            printf("welcome Ali");
            break;
        }


        if(id == 8970 && pass == 2233)
        {
            printf("welcome Amr");
            break;
        }

         k++;
         flag ++;
         printf("try again : ");
         scanf("%d",&pass);

        }while(k  < 2);

    }
    else
    {
        printf("You are NOT registered");
    }
    if(flag == 2)
    {
        printf("Incorrect password for 3 times, No more tries.");
    }

}
