/*
	Name: Kirby Lim
	Student#: 131684177
	Section: H
	Email: klim18@myseneca.ca
*/

#include <stdio.h>

int main(void)
{
	int loonies, quarters, dimes, nickels, pennies;
	double  number, balance, gst;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &number);

	gst = number * .13 + .005;
	number = gst + number;
	printf("GST: %.2lf\n", gst);
	printf("Balance owing: $%.2lf\n", number); 

	loonies = (int)number;
	balance = number - loonies;
	printf("Loonies required: %d, balance owing $%.2f\n", loonies, balance);
       
	balance = balance * 100;
	quarters = balance / 25;
	if (quarters == 0)
		balance = balance;
	else
	 balance = (int)balance % (quarters * 25); 
	printf("Quarters required: %d, balance owing $%1.2f\n", quarters,(float)balance/100);

	dimes = balance / 10;
	if (dimes == 0)
		balance = balance;
	else
	balance = (int)balance % (dimes * 10);
	printf("Dimes required: %d, balance owing $%1.2lf\n", dimes, (float)balance/100);

	nickels = balance / 5;
	if (nickels == 0 )
		balance = balance;
	else
	balance = (int)balance % (nickels *5);
	printf("Nickels required: %d, balance owing $%1.2lf\n", nickels, (float)balance/100);

	pennies = balance / 1;
	if (pennies == 0)        
		balance = balance;
	else
	balance = (int)balance % (pennies * 1);
	printf("Pennies required: %d, balance owing $%1.2lf\n", pennies, (float)balance/100);
		  
      return 0;
}
