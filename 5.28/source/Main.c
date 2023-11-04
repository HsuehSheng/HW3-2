#include <stdio.h>
char exchange(char o);

int main()
{
	char c;
	printf("Enter a character that in uppercase or lowercase = ");
	scanf_s("%c", &c);
	printf("%c\n", exchange(c));

	system("pause");
	return 0;
}

char exchange(char o)
{
	if (o >= 'a' && o <= 'z') return o - 32;
	else if (o >= 'A' && 0 <= 'Z') return o + 32;
}

