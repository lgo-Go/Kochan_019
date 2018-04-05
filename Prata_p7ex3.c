/*Читает целые числа*/

#include <stdio.h>

int main(void)
{
	int x, sum_chet = 0, sum_nechet = 0, chet = 0, nechet = 0;
	float chet_sred, nechet_sred;

	while(x != 0)
	{
		scanf("%i", &x);
		if(x % 2 ==0)
		{
			++chet;
			sum_chet += x;
		} else
			{
				++nechet;
				sum_nechet +=x;
			}
	}
	chet_sred = sum_chet / chet;
	nechet_sred = sum_nechet / nechet;
	printf("chet vsego: %i\nchet sred: %.1f\n", chet, chet_sred);
	printf("nechet vsego: %i\nnechet sred: %.1f\n", nechet, nechet_sred);

	return 0;
}