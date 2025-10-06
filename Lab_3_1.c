#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");

	int num1, num2;

	puts("Введите число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);

	puts("Введите второе число");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);

	printf("Сумма %d + %d = %d\n", num2, num1, num2 + num1);
	printf("Разность %d - %d = %d\n", num2, num1, num2 - num1);
	printf("Произведение %d * %d = %d\n", num2, num1, num2 * num1);
	printf("Целое от деления %d / %d = %d\n", num2, num1, num2 / num1);
	printf("Остаток от деления %d / %d = %d\n", num2, num1, num2 % num1);

	return 0;
}