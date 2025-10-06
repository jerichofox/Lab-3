#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>;
#include <stdio.h>;

#define D1 2.54
#define D2 2.32166
#define D3 2.7076

#define M1 1.852
#define M2 1.609
#define M3 1.475
#define M4 7.468
#define M5 7.4126


void main()
{
	setlocale(LC_ALL, "RUS");

	int dym;
	float result;

	puts("Введите число");
	scanf("%d", &dym);

	result = D1 * dym;
	printf("\n%d английских дюймов - это %.1f см \n", dym, result);
	result = D2 * dym;
	printf("%d испанских дюймов - это %.1f см \n", dym, result);
	result = D3 * dym;
	printf("%d старолитовских дюймов - это %.1f см \n\n", dym, result);

	result = M1 * dym;
	printf("%d морских миль - это %.1f км \n", dym, result);
	result = M2 * dym;
	printf("%d сухопутных миль - это %.1f км \n", dym, result);
	result = M3 * dym;
	printf("%d римских миль - это %.1f км \n", dym, result);
	result = M4 * dym;
	printf("%d старорусских миль - это %.1f км \n", dym, result);
	result = M5 * dym;
	printf("%d географических миль - это %.1f км \n", dym, result);

	return 0;
}