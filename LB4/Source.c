#include <stdio.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Задание 1");
	char c;
	int i;
	float f, f1, f2, fi;
	double e;
	puts("Введите char, int, float");
	scanf("%c%i%f%e", &c, &i, &f, &e);
	printf("Тип char %c\n", c);
	printf("Тип int %i\n", i);
	printf("Тип float %.2f\n", f);
	printf("Тип double %.2e\n", e);
	printf("Целая часть вещественного числа = %i\n", (int)f);
	printf("Дробная часть вещественного числа = %.2f\n", f - (int)f);
	printf("Кодом символа | %c | является десятичное число % i\n", c, c);
	printf("Кодом символа | %c | является шестнадцетеричное число% x\n", c, (int)c);
	printf("Десятичное число, соответствующее 1/%i равно %.2f\n\n", i, (float)1 / i);

	puts("---------");
	puts("Задание 2");

	int a, b, x;
	float y;
	double z;
	a = 11;
	b = 3;
	x = a / b;
	y = (float)a / (float)b;
	z = (double)a / (double)b;
	printf("Переменная x равна %i\n", x);
	printf("Переменная y равна %.2f\n", y);
	printf("Переменная z равна %.2lf\n", z);
	printf("1 - Если a / b то получится %i\n", a / b);
	printf("2 - Если a / b то получится %.2f\n", (float)a / (float)b);
	printf("3 - Если a / b то получится %.2lf\n\n", (double)a / (double)b);

	puts("---------");
	puts("Задание 3");

	int n;
	puts("Введите число трехзначное число n");
	scanf("%d", &n);
	printf("Введено число %d\n", n);
	printf("Последняя цифра введенного числа = %d, первая цифра = %d, сумма цифр = %d\n", n % 10, n / 100, (n % 10) + (n / 100) + ((n % 100 - n % 10) / 10));
	printf("Число %d наоборот будет %d\n", n, (n % 10) * 100 + (n % 100 - n % 10) + (n / 100));
}

