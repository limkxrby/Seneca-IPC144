#define NUMS
#include <stdio.h>

int main(void)
{
	int num, num2, i, high[10], low[10], dayH = 1, dayL = 1, totalHigh, totalLow;
	float avg = 0;
	printf("Please enter the number of days, between 3 and 10, inclusive:");

	do
	{
		scanf("%d", &num);
		if (num > 10 || num < 3)
		{
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive:");
		}
	} while (num > 10 || num < 3);


	for (i = 0; i < num; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);
	}

	totalHigh = high[0];
	totalLow = low[0];

	for (i = 1; i < num; i++)
	{
		if (high[i] > totalHigh)
		{
			totalHigh = high[i];
			dayH = i + 1;
		}
		if (low[i] < totalLow)
		{
			totalLow = low[i];
			dayL = i + 1;
		}
	}


	printf("\nDay   Hi   Low\n");
	i = 0;
	while (i < num)
	{
		printf("%d     %d     %d\n", i + 1, high[i], low[i]);
		i++;
	}

	printf("The highest temperature was %d, on day %d", totalHigh, dayH);
	printf("\nThe lowest temperature was %d, on day %d\n", totalLow, dayL);

	do
	{

		printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &num2);
		while (num2 > 4)
		{
			printf("\nInvalid entry, please enter a number between 1 and 4, inclusive:");
			scanf("%d", &num2);
		}

		for (i = 0; i < num2; i++)
		{
			avg = (high[i] + low[i]) + avg;
		}

		if (num2 < 0)
		{
			printf("\nGoodbye!");
		}
		else
		{
			avg = avg / (2 * num2);
			printf("The average temperature up to day %d is: %.2f", num2, avg);
		}
		avg = 0;

	} while (num2 > 0);
}