#include<stdio.h>



    
int main()
{ 
	float radius;
	float area;
	float PI = 3.14159;
	
	printf("Enter the value of radius:");
	scanf("%f", &radius);
	
	area = PI *radius * radius;
	
	
	printf("The area of the circle is: %.2lf\n", area);
	
	return 0;
}