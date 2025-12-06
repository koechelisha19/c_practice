#include <stdio.h>

int main()
{
	
  float radius;
  float area;
  float PI = 3.142;
  
  printf("Enter the radius of the circle:");
  scanf("%f", &radius);
  
  area = PI * radius * radius;
  
  printf("the area of the circle is %f", area);


	return 0;
}