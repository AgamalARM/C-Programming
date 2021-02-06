
# include<stdio.h>

void main (void)
{
	printf("Please Enter 10 Numbers : \n");
	int i ,num,sum;
	sum = 0;
	float avr ;
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Please Enter Number - %d = ",i+1);
		scanf("%d",&num);
		sum += num;
	}
	printf("Sumation of numbers = %d\n",sum);
	avr = (sum/10.0);
	printf("Avarage of numbers = %f",avr);
	
	
}