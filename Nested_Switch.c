/****************************************/
/*   Author      : Ahmed Gamal          */
/*   Description : Check number +,-,0   */
/*   Date        : 5 Feb. 2021          */
/*   Version     : v1                   */ 
/****************************************/

#include<stdio.h>

void main (void)
{
	int num;
	printf("Please Enter Your Number : \n");
	scanf("%d",&num);
	switch (num > 0)
	{
		case 1 : printf("The Number is Positive \n");  break;  
		case 0 : switch (num < 0)
		               {
						   case 1 : printf("The Number is Negative \n");          break;
						   case 0 : printf("The Number is Zero \n");  break;
		               } break;  
		  
	}	
	
}