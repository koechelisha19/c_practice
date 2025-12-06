#include <stdio.h>

int main()
{
	char line[500];
 FILE * fpointer = fopen("employee.text", "r");
 fgets(line, 500, fpointer);
 fgets(line, 500, fpointer);
 fgets(line, 500, fpointer);
 printf("%s", line);
 
 fclose(fpointer);

	return 0;
}