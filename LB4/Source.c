#include <stdio.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� 1");
	char c;
	int i;
	float f, f1, f2, fi;
	double e;
	puts("������� char, int, float");
	scanf("%c%i%f%e", &c, &i, &f, &e);
	printf("��� char %c\n", c);
	printf("��� int %i\n", i);
	printf("��� float %.2f\n", f);
	printf("��� double %.2e\n", e);
	printf("����� ����� ������������� ����� = %i\n", (int)f);
	printf("������� ����� ������������� ����� = %.2f\n", f - (int)f);
	printf("����� ������� | %c | �������� ���������� ����� % i\n", c, c);
	printf("����� ������� | %c | �������� ����������������� �����% x\n", c, (int)c);
	printf("���������� �����, ��������������� 1/%i ����� %.2f\n\n", i, (float)1 / i);

	puts("---------");
	puts("������� 2");

	int a, b, x;
	float y;
	double z;
	a = 11;
	b = 3;
	x = a / b;
	y = (float)a / (float)b;
	z = (double)a / (double)b;
	printf("���������� x ����� %i\n", x);
	printf("���������� y ����� %.2f\n", y);
	printf("���������� z ����� %.2lf\n", z);
	printf("1 - ���� a / b �� ��������� %i\n", a / b);
	printf("2 - ���� a / b �� ��������� %.2f\n", (float)a / (float)b);
	printf("3 - ���� a / b �� ��������� %.2lf\n\n", (double)a / (double)b);

	puts("---------");
	puts("������� 3");

	int n;
	puts("������� ����� ����������� ����� n");
	scanf("%d", &n);
	printf("������� ����� %d\n", n);
	printf("��������� ����� ���������� ����� = %d, ������ ����� = %d, ����� ���� = %d\n", n % 10, n / 100, (n % 10) + (n / 100) + ((n % 100 - n % 10) / 10));
	printf("����� %d �������� ����� %d\n", n, (n % 10) * 100 + (n % 100 - n % 10) + (n / 100));
}

