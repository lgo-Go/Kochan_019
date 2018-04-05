/*Зарплата и налоги от количества часов (с выбором)*/

#include <stdio.h>

int main(void)
{
	int variant;
	float stavka = 0,
		  hours,
		  gross_profit,
		  improved_profit,
		  tax;

	printf("1) $8.75/h           2) $9.33/h\n");
	printf("3) $10.00/h          4) $11.20/h\n5) Exid\n");
	while(stavka < 8.0 && variant != 5)
	{
		scanf("%i", &variant);
	
	switch (variant)
	{
		case 1:
			stavka = 8.75;
			break;
		case 2:
			stavka = 9.33;
			break;
		case 3:
			stavka = 10.00;
			break;
		case 4:
			stavka = 11.20;
			break;
		default:
			printf("please, enter the stavka\n");
	}
	}
	printf("\nHow many hours did you work?\n");
	scanf("%f", &hours);
	improved_profit = (40.0 * stavka) + ((1.5 * stavka) * (hours - 40.0));
	gross_profit = (hours <= 40.0) ? (stavka * hours) : improved_profit; 
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