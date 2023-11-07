/*//���� 1.c
#include <stdio.h>
int main()
{
	int i = 100;
	int *p = &i;
	int **q = &p;

	*p = 200;
	printf("i=%d\n", i);

	**q = 300;
	printf("i=%d\n", i);

	return 0;
}
*/

/*//��������
#include <stdio.h>
int main()
{
	int i = 80;
	int *p = &i;
	int **dp = &p;

	**dp = 90;
	*p = 100;
	printf("%d %d %d\n", i, *p, **dp);

	return 0;
}
*/

/*//dp2.c
#include <stdio.h>

void set_pointer(char **q);

int main()
{
	char *p;
	set_pointer(p);

	printf("������ �ݾ�: %s\n", p);
	return 0;
}

void set_pointer(char **q) {
	*q = "All that glisters is not gold.";
}
*/

/*//stringarray.c
#include <stdio.h>
int main()
{
	int i, n;
	char* fruits[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};

	n = sizeof(fruits) / sizeof(fruits[0]);

	for (i = 0; i < n; i++)
		printf("%s \n", fruits[i]);

	return 0;
}
*/

/*//arraypointer.c
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int (*pa)[5];
	int i;

	pa = &a;
	for (i = 0; i < 5; i++)
		printf("%d \n", (*pa)[i]);

	return 0;
}
*/

/*//fp1.c
#include <stdio.h>
int add(int x, int y)
{
	return x + y;
 }

int sub(int x, int y)
{
	return x - y;
}

int main()
{ 
	int result;
	int (*pf)(int x, int y);

	pf = add;
	result = pf(10, 20);
	printf("10+20�� %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20�� %d\n", result);

	return 0;
}
*/

/*//fp1.c ����
#include <stdio.h>
int add(int x, int y)
{
	return x + y;
}
int div(int x, int y)
{
	if (x > y)
		return x / y;
	else
		return y / x;
}

int main()
{
	int result;
	int (*pf)(int, int);

	pf = add;
	result = pf(10, 20);
	printf("10+20�� %d\n", result);

	pf = div;
	result = pf(10, 20);
	printf("10/20�� %d\n", result);
	
	return 0;
}
*/

/*//��Ģ���� �ڵ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void menu();
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	if (x > y)
		return x / y;
	else
		return y / x;
}

void menu()
{
	printf("=====================\n");
	printf("0. ����\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ������\n");
	printf("4. ����\n");
	printf("=====================\n");
}

int main()
{
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div };

	while (1)
	{
		menu();
		printf("�޴��� �����Ͻÿ�:");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("2���� ������ �Է��Ͻÿ�:");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("���� ���=%d\n", result);
	}
	return 0;
}
*/

/*//���� ���
#include <stdio.h>
#define ROWS 4
#define COLS 3
double get_row_avg(int m[ROWS][COLS], int r);
double get_total_avg(int m[ROWS][COLS]);

int main()
{
	int m[ROWS][COLS] = { {10,20,30},{10,20,30},{10,20,30},{10,20,30} };
	double sum = get_row_avg(m, 2);
	double total = get_total_avg(m);
}

double get_row_avg(int m[ROWS][COLS], int r)
{
	int *p, *endp;
	double sum = 0.0;

	p = &m[r][COLS];
	endp = &m[r][COLS];

	while (p < endp)
		sum += *p++; // �� �κ� ���ٷ� �غ���

	sum /= COLS; // ��� ���
	printf("subprogram total=%2.2lf\n", sum);

	return sum;
}

double get_total_avg(int m[ROWS][COLS])
{
	int* p, * endp;
	double sum = 0.0;

	p = &m[0][0];
	endp = &m[ROWS - 1][COLS];

	while (p < endp)
		sum += *p++;

	sum /= ROWS * COLS;
	printf("subprogram total=%2.2lf\n", sum);

	return sum;
}
*/

/*// ���� ��� ���ϱ� �̿ϼ�
#define ROWS 4
#define COLS 3
double get_col_avg(int m[ROWS][COLS], int c);
double get_total_avg(int m[ROWS][COLS]);

int main()
{
	int m[ROWS][COLS] = { {10,20,30},{10,20,30},{10,20,30},{10,20,30} };
	double sum = get_col_avg(m, 2);
	double total = get_total_avg(m);

	return 0;
}

double get_col_avg(int m[ROWS][COLS], int c)
{
	int *p, *endp;
	double sum = 0.0;

	p = &m[0][c];
	endp = &m[ROWS][c];

	while (p < endp)
		sum += *p++;

	sum /= ROWS;
	printf("subprogram total=%2.2lf\n", sum);

	return sum;
}

double get_total_avg(int m[ROWS][COLS])
{
	int* p, * endp;
	double sum = 0.0;

	p = &m[0][0];
	endp = &m[ROWS][COLS - 1];

	while (p < endp)
		sum += *p++;

	sum /= ROWS * COLS;
	printf("subprogram total=%2.2lf\n", sum);

	return sum;
}
*/