#include <stdio.h>

int main()
{

	int salary;
	int savings;
	int expenses;
	float medical;
	printf("Enter the amount of salary:");
	scanf("%d", &salary);
	
	savings = salary / 3;
	expenses = salary - savings;
	medical = salary / 4;
	 
   printf("The amount of expenses is %d shillings\n", expenses);
   printf("The amount on medical is %f shillings\n", medical);
	printf("The amount of savings is %d shillings\n", savings);
	
	
	
	
	
	


	return 0;
}