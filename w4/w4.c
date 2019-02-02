#define NUMS
#include <stdio.h>

int main(void)
{
	int num, i, high[11], low[11];
	printf("Please enter the number of days, between 3 and 10, inclusive:");
	do
	{
		scanf("%d", &num);
		if (num > 10 || num < 3)
		{
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive:");
		}

	} while (num > 10 || num < 3);


	for (i = 1; i <= num; i++)
	{
		printf("Day %d - High: ", i);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i);
		scanf("%d", &low[i]);
	}
	printf("\nDay   Hi   Low\n");
	i = 1;
	while (i <= num)
	{
		printf("%8d     %8d     %8d\n", i, high[i], low[i]);
		i++;
}



}

