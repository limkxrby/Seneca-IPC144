/*
Name: Kirby LIm
Student number: 131684177
Email: klim18@myseneca.ca
Workshop: 5
Section: H
Date: 2/20/2018
*/

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 2
#include <stdio.h>

// Define Number of Employees "SIZE" to be 2

struct Employee {
	int id;
	int age;
	float salary;
};
// Declare Struct Employee 


/* main program */
int main(void) {

	int option = 0, i = 0, counter = 0;
	struct Employee emp[SIZE] = { { 0 } };

	printf("---=== EMPLOYEE DATA ===---\n\n");

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:
			option = 0;
			break;
		case 1:
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========B\n");
			for (i = 0; i < counter; i++)
			{
				if (emp[i].id > 0 || emp[i].age > 0 || emp[i].salary > 0)
				{
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}
			}
			printf("\n");
			// @IN-LAB

			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;
		case 2:
			printf("Adding Employee\n===============\n");
			if (counter >= SIZE)
			{
				printf("ERROR ! ! ! Maximum Number of Employees Reached\n");
				break;
			}
			else
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[i].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[i].age);
				printf("Enter Employee Salary: ");
				scanf("%f", &emp[i].salary);
				printf("\n");
				i++;
				counter++;

			}
			// Check for limits on the array and add employee 
			// data accordingly. 



			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);
	printf("Exiting Employee Data Program. Good Bye! ! !\n");

	return 0;
}



//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
111       34   78980.88
112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/