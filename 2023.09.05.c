//   배열
/*
#include <stdio.h>

int main()
{
	int scores[5] = { 31,63,62,87,14 };
	int i;

	for (i = 0; i < 5; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	int scores[5];
	int i;

	for (i = 0; i < 5; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	int scores[6] = { 1,2,3,4,5,6 };
	int i, size;

	size = sizeof(scores) / sizeof(scores[0]);

	for (i = 0; i < size; i++);
	printf("%d", scores[i]);

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 5

int main()
{
	int i;
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };

	for (i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("a[]와 b[]는 같지 않습니다.\n");
			return 0;
		}
	}
	printf("a[]와 b[]는 같습니다.\n");
	return 0;
}
*/


//주사위 던지기
/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main()
{
	int freq[SIZE] = { 0 };
	int i;

	for (i = 0; i < 10000; i++)
		++freq[rand() % 6];

	printf("=======================\n");
	printf("면    빈도\n");
	printf("=======================\n");
	for (i = 0; i < SIZE; i++)
		printf("%3d    %3d\n", i, freq[i]);

	return 0;
}
*/

//★실습 : 극장 좌석 예약★
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int main()
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };
	while (1)
	{
		printf("컴퓨터공학과 박지안 20230844\n");
		printf("좌석을 예약하시겠습니까?(y또는n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'y')
		{
			printf("----------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("----------------------\n");
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");
			printf("몇 번째 좌석을 예약하시겠습니까");
			scanf("%d", &ans2);
		
		if (ans2 <= 0 || ans2 > SIZE) {
			printf("1부터 10사이의 숫자를 입력하세요.\n");
			continue;
		}
		if (seats[ans2 - 1] == 0) {
			seats[ans2 - 1] = 1;
			printf("예약되었습니다.\n");
		}
		else
			printf("이미 예약된 자리입니다.\n");
	}
	else if (ans1 == 'n')
		return 0;
    }
return 0;
}
*/

//최소값, 최대값 구하기
/*
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main(void)
{
	int prices[SIZE] = { 0 };
	int i, maximum;
	printf("컴퓨터공학과 박지안 20230844\n");
	printf("---------------------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------------------------\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		prices[i] = (rand() % 100) + 1;
		printf("%-3d", prices[i]);
	}
	printf("\n\n");
	maximum = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] > maximum) // < = 최소값, > = 최대값 
			maximum = prices[i];
	}
	printf("최대값은 %d입니다.\n", maximum);
	return 0;
}
*/

/*
#include <stdio.h>
#define STUDENTS 5
int get_average(int scores[], int n);

int main()
{
	int scores[STUDENTS] = { 1,2,3,4,5 };
	int avg;

	avg = get_average(scores, STUDENTS);
	printf("평균은 %d입니다.\n", avg);
	return 0;
}

int get_average(int scores[], int n)
{
	int i;
	int sum = 0;
	for (i = 0; i, 5; i++)
		printf("%d", scores[i]);
	scores[0] = 1004;
	for (i + 0; i, n; i++)
		sum += scores[i];
	return sum / n;
}
*/