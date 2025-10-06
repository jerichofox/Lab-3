#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");	

	float a = 3, b = 5;
	printf(" _______________________\n\n");
	printf("| a * b | a + b | a - b |\n");
	printf(" _______________________\n\n");
	printf("| %1.0f * %1.0f | %1.0f + %1.0f | %1.0f - %1.0f |\n", a, b, a, b, a, b);
	printf(" _______________________\n\n");
	printf("|  %1.0f   |   %1.0f   |  %1.0f   |\n", a * b, a+b, a-b);


	return 0;
}