/*Зарплата и налоги от количества часов*/

#include <stdio.h>

int main(void)
{
	float hours,
		  gross_profit,
		  improved_profit,
		  tax;

	printf("\nHow many hours did you work?\n");
	scanf("%f", &hours);
	improved_profit = 400.0 + (15.0 * (hours - 40.0));
	gross_profit = (hours <= 40.0) ? (10.0 * hours) : improved_profit; 
	printf("gross profit = $%.2f\n", gross_profit);
	if(gross_profit <= 300.0)
	{
		tax = gross_profit * 0.15;
	} else if (gross_profit > 300.0 && gross_profit <=450.0)
	{
		tax = 45.0 + 0.2 * (gross_profit - 300.0);
	} else
	{
		tax = 75.0 + 0.25 * (gross_profit - 450.0);
	}
	printf("tax = $%.2f\n", tax);
	printf("net profit = $%.2f\n", gross_profit - tax);
}