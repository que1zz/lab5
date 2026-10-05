#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main() {

	int a, b, c;
	setlocale(LC_ALL, "RUS");

	printf("Введите 1 измеренный параметр кислотности почвы\n");
	scanf("%d", &a);
	
	printf("Введите 2 измеренный параметр кислотности почвы\n");
	scanf("%d", &b);
	
	printf("Введите 3 измеренный параметр кислотности почвы\n");
	scanf("%d", &c);

	if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0) {
		printf("Почва идеальная");
		return 0;
	}
	else {
		printf("Почва не идеальная");
		return 1;
	}


}