#include <stdio.h>

int main()
{
float num1;
float square;
float reciprical;
  
  
printf("enter number:");
scanf("%f",&num1);

square = num1 * num1;
reciprical = 1 / num1;
if(num1 != 0){
printf("the square of num1 is %f\nand the reciprical of num1 is %f\n", square, reciprical);
}
else {
	printf("the square of num1 is %f\n",square);
	printf("the reciprical value of num1 is undefined");
}

	return 0;
}