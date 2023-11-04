#include <stdio.h>
#include <stdlib.h>

int lcm(int a,int b);
int gcd(int a,int b);

int main()
{
	int num1, num2;
	printf("Enter num1 = ");
	scanf_s("%d", &num1);
	printf("Enter num2 = ");
	scanf_s("%d", &num2);
	int result = lcm(num1, num2);
	printf("least common multiple = %d\n", result);

	system("pause");
	return 0;
}

int gcd(int a,int b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}