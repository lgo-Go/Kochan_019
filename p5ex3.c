/*Высчитывает треугольные числа 
для значений с 5 до 50 через каждые 5*/

#include <stdio.h>

int main(void)
{
	int n = 5;
	int triangular;

	for(; n <= 50; n = n + 5)
	{
		triangular = (n*(n + 1))/2;
		printf("tringular number for %2i is %i\n", n, triangular);
	}
	
	return 0;
}