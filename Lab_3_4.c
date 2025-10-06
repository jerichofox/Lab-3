#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");

	int k, s;

	puts("Введите кол-во товара:");
	scanf("%d", &k);
	puts("Введите стоимость единицы товара:");
	scanf("%d", &s);
	printf("Стоимость покупки: %d", k * s);

	return 0;
}