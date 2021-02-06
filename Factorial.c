/****************************************/
/*   Author      : Ahmed Gamal          */
/*   Description : Login System         */
/*   Date        : 5 Feb. 2021          */
/*   Version     : v1                   */ 
/****************************************/

#include<stdio.h>

void main (void)
{
	int Number;
	int fact = 1;
	printf("Please Enter Your Number : ");
	scanf("%d",&Number);
	int num = Number ;
	if (Number == 0) 
	{
		fact = 1 ;
	}
	else
	{
	do {
		fact = fact * Number ;
		Number -- ;
		
	}while (Number != 0);
	}
		
	printf("The Factorial of Number %d = %d ",num,fact);
	
	
}