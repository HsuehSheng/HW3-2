#include <stdio.h>

int power(int a, int b);

int main()
{
	int base, exponent;
	printf("Enter base = ");
	scanf_s("%d", &base);
	printf("Enter exponent = ");
	scanf_s("%d", &exponent);

	int result = power(base, exponent);
	printf("Result = %d\n", result);

	system("pause");
	return 0;
}

int power(int a, int b)
{
	if (b == 0) return 1;
	else return a * power(a, b - 1);
}


