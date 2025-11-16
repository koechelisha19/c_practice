#include <stdio.h>

int main()
{
	 char Name [20];
	 printf("Enter name:");
	 fgets(Name, 20, stdin);
	 printf("Your name is %s", Name);
	return 0;
}