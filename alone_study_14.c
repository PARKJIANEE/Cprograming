// 14장 포인터 활용

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
	// printf("*p=%d\n", *p);
	// printf("**q=%d\n", **q);

	// printf("%d\n", *p + **q); // 실행결과는 600

	return 0;
}
*/

/*// 연습문제
#include <stdio.h>
int main()
{
	int i = 80;
	int *p = &i;
	int **dp = &p;

	**dp = 90;
	*p = 100;
	
	// printf("**dp=%d\n", **dp);
	// printf("*p=%d\n", *p);
	printf("%d %d %d\n", i, *p, **dp); // 실행결과 100 100 100

	return 0;
}
*/

/*// 예제 2.c
#include <stdio.h>

void set_pointer(char **q);

int main()
{
	char *p;
	set_pointer(&p);

	printf("오늘의 격언: %s\n", p); // 실행결과 오늘의 격언: All that glisters is not gold.
	
	return 0;
}

void set_pointer(char** q)
{
	*q = "All that glisters is not gold.";
}
*/


/*// dp2.c
#include <stdio.h>

void change(int *p); // change()함수

int main()
{
	int num = 42;
	int *p_num = &num;

	printf("변경 전: %d\n", num); // 변경 전: 42

	change(p_num);

	printf("변경 후: %d\n", num); // 변경 후: 1004

	return 0;
}

void change(int *p)
{
	*p = 1004;
}
*/

/*// change함수 연습
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void change(char *p);

int main()
{
	char q[] = "angel";
	char *p_q = q;

	printf("변경 전: %s\n", q); // 변경 전: angel

	change(p_q);

	printf("변경 후: %s\n", q); // 변경 후: devil

	return 0;
}

void change(char *p)
{
	strcpy(p, "devil");
}
*/

/*// 2차원 배열에 문자열 저장
char fruits[4][10] = {
	"apple",     // [a][p][p][l][e][\0][_][_][_][_]
	"blueberry", // [b][l][u][e][b][e][r][r][y][\0]
	"orange",    // [o][r][a][n][g][e][\0][_][_][_]
	"melon"      // [m][e][l][o][n][\0][_][_][_][_]
}; // 문자형 포인터 배열 - [가장 많이 사용되지만 메모리의 낭비됨]

char *fruits[] = {
	"apple",     // [a][p][p][l][e][\0]
	"blueberry", // [b][l][u][e][b][e][r][r][y][\0]
	"orange",    // [o][r][a][n][g][e][\0]
	"melon"      // [m][e][l][o][n][\0]
}; // Ragged(레그드) 배열 - [각 행의 길이가 가변적으로 변할 수 있음 메모리의 낭비없음]
*/

/*// stringarray.c
#include <stdio.h>
int main()
{
	int i, n;
	char *fruits[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};
	n = sizeof(fruits) / sizeof(fruits[0]); // 배열 원소 개수 계산

	for (i = 0; i < n; i++)
		printf("%s \n", fruits[i]); // 포인터 스타일로 변형해보기

	return 0;
}
*/

/*// 중간 점검
#include <stdio.h>

int main()
{
	int i, n;
	double num[] = {
		202.0,
		202.1,
		202.2,
		202.3
	};
	n = sizeof(num) / sizeof(num[0]);

	for (i = 0; i < n; i++)
		printf("%.1f \n", num[i]);

	return 0;
}
*/

/*// arraypointer.c
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int (*pa)[5]; // int [5] 배열에 대한 포인터 선언
	int i;
	
	pa = &a;
	for (i = 0; i < 5; i++)
		printf("%d, %d \n", &((*pa)[i]), (*pa)[i]); // 주소가 출력되게 &((*pa)[i]) 추가함

	return 0;
}
*/

/*//fp1.c - 사칙연산
#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
	int result;
	int (*pf)(int, int); // 함수 포인터 정의

	pf = add;
	result = pf(10, 20); // add() 호출
	printf("10+20은 %d\n", result);

	pf = sub;
	result = pf(10, 20); // sub() 호출
	printf("10-20은 %d\n", result);

	pf = mul;
	result = pf(10, 20); // mul() 호출
	printf("10*20은 %d\n", result);

	pf = div;
	result = pf(10, 20); // div() 호출
	printf("10/20은 %d\n", result);

	return 0;
}

int add(int x, int y)
{
	return x + y;
};

int sub(int x, int y)
{
	if (x > y)
		return x - y;
	else
		return y - x;
};

int mul(int x, int y)
{
	return x * y;
};

int div(int x, int y)
{
	if (x > y)
		return x / y;
	else
		return y / x;
};
*/

/*// 함수 포인터 배열 cont'd
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void menu(); // 함수 원형 정의
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu()
{
	printf("=======================\n");
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("=======================\n");
}

int main()
{
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div };

	while (1)
	{
		menu();
		printf("메뉴를 선택하시오: ");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("2개의 정수를 입력하시오: ");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y); // 함수 호출
		printf("연산 결과=%d\n", result);
	}
	return 0;
}

int add(int x, int y)
{
	return x + y;
};
int sub(int x, int y) 
{
	return x - y;
};
int mul(int x, int y)
{
	return x * y;
};
int div(int x, int y)
{
	return x / y;
};
*/

// 14장 pg 26까지 내용-------------------------------------------------------------------------------------------------------
