#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	/*
	for (int start = 1; start <= 5; start++)
	{
		putchar('!');
		putchar('+');
	}
	for (int start = 6; start <= 10; start++)
	{
		putchar('!');
		putchar('*');
	}
	*/	
	/*
	int n, m, k, s;
	scanf("%d", &n);
	scanf("%d", &m);
	s = 0;
	k = 0;
	for (int i = m; i >= n; i--)
	{
		s += i;
		printf("выполнено %d раз\n", k++);

	}
	printf("результат %d", s);
	*/
	/*
	float x, n,s, m;
	printf("¬ведите значение х и шага табул€ции дл€ функции y=|log x|-(x-2)^2\n");
	printf("«начение начальное х:");
	scanf("%f", &x);
	printf("«начение конечное х:");
	scanf("%f", &m);
	printf("\n«начение шага табул€ции:");
	scanf("%f", &n);
	s = 0;
	for (float i = x; i <= m; i += n)
	{
		s = fabs(log10(i)) - pow((i - 2), 2);
		s += s;
		printf("_______________________\n");
		printf("|\t%.2f|\t%.2f|\n",i,s);
	}
	*/
	float n, s,a;
	printf("«начение начальное:");
	scanf("%f", &n);
	s = 1;
	for (float i = 1; i <= n; i++)
	{
		a = 1-1/(2*i);
		s *= a;
		printf("_____________________\n");
		printf("|\t%.2f|\t%.2f|\n", i, s);
	}
	printf("результат %.3f", s);
}