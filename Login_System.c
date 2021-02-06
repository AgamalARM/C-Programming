/****************************************/
/*   Author      : Ahmed Gamal          */
/*   Description : Login System         */
/*   Date        : 5 Feb. 2021          */
/*   Version     : v1                   */ 
/****************************************/

#include<stdio.h>

void main (void)
{
	int id;
	printf("Please Enter Your ID : \n");
	scanf("%d",&id);
	switch (id)
	{
		case 1234 : printf("Welcome Ahmed \n");  break;  
		case 5678 : printf("Welcome Salama \n"); break;  
		case 1145 : printf("Welcome Rizk \n");   break;  
		default   : printf("Wrong ID \n");       break;  
	}
	
	
}