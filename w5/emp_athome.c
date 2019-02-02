/*
Name: Kirby LIm
Student number: 131684177
Email: klim18@myseneca.ca
Workshop: 5
Section: H
Date: 2/25/2018
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 4


struct Employee
{
	int id;
	int age;
	float salary;
};

int main(void)
{

	int option = 0, i = 0 ,counter = 0;
	int num;
	float newSalary;
	struct Employee emp[SIZE] = {{0}};

	printf("---=== EMPLOYEE DATA ===---\n");

	do
	{
			printf("\n1. Display Employee Information");
			printf("\n2. Add Employee");
			printf("\n3. Update Employee Salary");
			printf("\n4. Remove Employee");
			printf("\n0. Exit");
			printf("\n\nPlease select from the above options: ");
			scanf("%d", &option);

			switch (option)
			{
			case 0:
				option = 0;
				printf("\nExiting Employee Data Program. Good Bye!!!\n");
				break;
			case 1:
				printf("\nEMP ID  EMP AGE  EMP SALARY\n======   ======= =========");
				for (i = 0; i < counter; i++)
				{
					if (emp[i].id > 0 && emp[i].age > 0 && emp[i].age < 200 && emp[i].salary > 0)
					{
						printf("\n%6d %9d %11.2lf", emp[i].id, emp[i].age, emp[i].salary);
					}
				}
				printf("\n");
				break;
			case 2:
				printf("\nAdding Employee\n===============\n");
				if (counter >= SIZE)
				{
					printf("ERROR!!! Maximum Number of Employees Reached\n");
				}
				else
				{
					printf("Enter Employee ID: ");
					scanf("%d", &emp[i].id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[i].age);
					printf("Enter Employee Salary: ");
					scanf("%f", &emp[i].salary);
					i++;
					counter++;
				}
				break;
		case 3:
				do
				{
					printf("Enter Employee ID: ");
					scanf("%d", &num);
					for (i = 0; i < counter; i++)
					{
						if (num == emp[i].id)
						{
							printf("Current salary is %2.f", emp[i].salary);
							printf("\nEnter Employee New Salary: ");
							scanf("%f", &newSalary);
							emp[i].salary = newSalary;
							break;
						}
					}

				} while (num != emp[i].id || num < 0);
				break;
			case 4:
				do
				{
					printf("Enter Employee ID: ");
					scanf("%d", &num);
					for (i = 0; i < counter; i++)
					{
						if (num == emp[i].id)
						{
						    printf("Employee %d will be removed\n", emp[i].id);
						    option = num;
						    for(i = i; i < counter-1; i++)
                            {
                                emp[i].id = emp[i+1].id;
                                emp[i].age = emp[i+1].age;
                                emp[i].salary = emp[i+1].salary;
                            }
                            counter--;
                            break;
						}
					}
				} while (option != num || num < 0);

				break;

			default:
				printf("\nERROR: Incorrect Option: Try Again\n");
			}


	} while (option != 0);



	return 0;
}

