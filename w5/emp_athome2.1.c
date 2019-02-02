#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 4


struct Employee
{
	int id;
	int age;
	double salary;
}emp[SIZE];

int main(void)
{

	int option, i, counter = 0;
	float num;

	printf("---=== EMPLOYEE DATA ===---\n");

	do
	{
		for (i = 0; i <= SIZE; i++)
		{
			printf("\n1. Display Employee Information");
			printf("\n2. Add Employee");
			printf("\n0. Exit");
			printf("\n\nPlease select from the above options: ");
			scanf_s("%d", &option);

			switch (option) {
			case 0:
				printf("\nExiting Employee Data Program. Good Bye! ! !\n");
				i = SIZE;
				break;
			case 1:
				printf("\nEMP ID  EMP AGE  EMP SALARY\n======   ======= ==========");
				for (i = 0; i < counter; i++)
				{
					if (emp[i].id > 0 && emp[i].age > 15 && emp[i].age < 150 && emp[i].salary > 12)
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
					scanf_s("%lf", &emp[i].salary);
					counter++;
				}
				break;
			case 3:
				do
				{
					printf("Employee number not found! Please enter ID again: ");
					scanf("%f", &num);
				} while (!num == emp[i].age);
			default:
				printf("Error");
			}

		}
	} while (option > 0);



	return 0;
}
