#include <stdio.h>

int main()

    int reg = {"10285"};
   char name[200] = {"ElishaKiprotich"};
   char course [200] = {"computer_science"};
   int age = 20;

   
    
    
    printf("Enter students registration number:");
    scanf("%d", &reg);
   if (reg == 10285 ) {
	   printf("students name is %s\nstudents course is:%s\nstudents age is:%d\n",name, course, age);
   }
	   else {
		   printf("invalid registration number!");
	   }
   
   
   

  

	return 0;
}