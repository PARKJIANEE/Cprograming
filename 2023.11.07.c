/*//예제 1.c
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

/*//연습문제
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

	printf("오늘의 격언: %s\n", p);
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
	printf("10+20은 %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20은 %d\n", result);

	return 0;
}
*/

/*//fp1.c 변형
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
	printf("10+20은 %d\n", result);

	pf = div;
	result = pf(10, 20);
	printf("10/20은 %d\n", result);
	
	return 0;
}
*/

/*//사칙연산 코드
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
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("=====================\n");
}

int main()
{
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div };

	while (1)
	{
		menu();
		printf("메뉴를 선택하시오:");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("2개의 정수를 입력하시오:");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("연산 결과=%d\n", result);
	}
	return 0;
}
*/

/*//행의 평균
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
		sum += *p++; // 이 부분 두줄로 해보기

	sum /= COLS; // 평균 계산
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

/*// 열의 평균 구하기
#include <stdio.h>
#define ROWS 4
#define COLS 3
double get_col_avg(int m[ROWS][COLS], int c);

int main()
{
	int m[ROWS][COLS] = { {10,20,30},{10,20,30},{10,20,30},{10,20,30} };
	double col_avg = get_col_avg(m, 2);
	printf("열의 평균=%2.2lf\n", col_avg);

	return 0;
}

double get_col_avg(int m[ROWS][COLS], int c)
{
	double sum = 0.0;

	for (int i = 0; i < ROWS; i++)
	{
		sum += m[i][c];
	}

	double col_avg = sum / ROWS;

	return col_avg;
}
*/
