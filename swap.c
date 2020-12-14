#include <stdio.h>

void swapf(int ,int );
int num1 = 30;
int num2 = 50;

void main(void)
{
    printf("number1 before swap = %d\n",num1);
    printf("number2 before swap = %d\n",num2);

	swapf(num1,num2);

}

void swapf(int x,int y)
{
    int temp;
    temp = x;
    x = y ;
    y = temp;
    printf("number1 after swap = %d\n",x);
    printf("number2 after swap = %d\n",y);
}
