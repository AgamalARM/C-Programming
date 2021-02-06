/****************************************/
/*   Author      : Ahmed Gamal          */
/*   Description : Login System         */
/*   Date        : 5 Feb. 2021          */
/*   Version     : v1                   */ 
/****************************************/

#include<stdio.h>

void main (void)
{
	int number;
	printf("Please Enter Your Number : ");
	scanf("%d",&number);
	while (number != 0)
	{
		printf("%d",(number % 10)); // to catch the last digit
		number = number / 10;       // to remove the last digit
	}
	
	
}