#include <stdio.h> 


int main()
{
	FILE * fpointer = fopen ("c\employees.text", "w");
	
	fprintf(fpointer, "Elisha,manager\n Collins,ceo\n");
	return 0;
}
