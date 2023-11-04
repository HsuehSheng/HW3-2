#include <stdio.h>

unsigned long long int f(unsigned int n) {
	if (n <= 1) {
		return n;
	}

	unsigned long long int p = 0;
	unsigned long long int current = 1;

	for (unsigned int i = 2; i <= n; ++i) {
		unsigned long long int next = p + current;
		p = current;
		current = next;
	}

	return current;
}

int main() {
	unsigned int n;
	printf("Enter the value of n: ");
	scanf_s("%u", &n);

	unsigned long long int result = f(n);
	printf("The %uth Fibonacci number is: %llu\n", n, result);

	return 0;
}
