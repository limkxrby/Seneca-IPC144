#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 4


struct Employee
{
	int id;
	int age;
	float salary;
}emp[SIZE];

int main(void)
{

	int option, i, counter = 0;
	float num, newSalary;

	printf("---=== EMPLOYEE DATA ===---\n");

	do
	{
		for (i = 0; i <= SIZE; i++)
		{
			printf("\n1. Display Employee Information");
			printf("\n2. Add Employee");
			printf("\n3. Update Employee Salary");
			printf("\n4. Remove Employee");
			printf("\n0. Exit");
			printf("\n\nPlease select from the above options: ");
			scanf_s("%d", &option);

			switch (option) 
			{
			case 0:
				printf("\nExiting Employee Data Program. Good Bye! ! !\n");
				i = SIZE;
				break;
			case 1:
				printf("\nEMP ID  EMP AGE  EMP SALARY\n======   ======= ==========");
				for (i = 0; i <= counter; i++)
				{
					if (emp[i].id > 0 && emp[i].age > 0 && emp[i].age < 200 && emp[i].salary > 0)
					{
						printf("\n%6d %9d %11.2lf", emp[i].id, emp[i].age, emp[i].salary);
					}
				}
				break;
			case 2:
				printf("\nAdding Employee\n================\n");
				if (counter == SIZE)
				{
					printf("ERROR! ! ! Maximum Number of Employees Reached\n");
				}
				else
				{
					printf("Employee ID: ");
					scanf_s("%d", &emp[i].id);
					printf("Enter Employee Age: ");
					scanf_s("%d", &emp[i].age);
					printf("Enter Employee Salary: ");
					scanf_s("%f", &emp[i].salary);
					counter++;
				}
				break;
		case 3:
				do
				{
					printf("Enter Employee ID: ");
					scanf_s("%f", &num);
					for (i = 0; i <= SIZE; i++)
					{
						if (num == emp[i].id)
						{
							printf("Current salary is %2.f", emp[i].salary);
							printf("\nEnter Employee New Salary: ");
							scanf_s("%f", &newSalary);
							emp[i].salary = newSalary;
							break;
						}
					}

				} while (!num == emp[i].id || num < 0);
				break;
			case 4:
				do
				{
					printf("Enter Employee ID: ");
					scanf_s("%f", &num);
					for (i = 0; i <= SIZE; i++)
					{
						if (num == emp[i].id)
						{
							printf("Employee %d will be removed", emp[i].id);
							emp[i].id = -1;

							break;
						}
					}

				} while (!num == emp[i].id || num < 0);
				break; 
			default:
				printf("\nERROR: Incorrect Option: Try Again\n");
			}

		}
	} while (option > 0);



	return 0;
}
