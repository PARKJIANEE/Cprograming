//2023.08.29 c프로그래밍응용 수업
/*
#include <stdio.h>

int main()
{
	int c1, c2, c3, c4, c5;
	int sum = 0;
	
	c1 = 100;
	c2 = 90;
	c3 = 70;
	c4 = 50;
	c5 = 80;
	sum = c1 + c2 + c3 + c4 + c5;
	printf("총합=%d", sum);
	
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int i;
	int s[5];
	int sum = 0;

	s[0] = 10;
	s[1] = 20;
	s[2] = 30;
	s[3] = 40;
	s[4] = 50;

	sum = s[0] + s[1] + s[2] + s[3] + s[4];

	//for (i = 0; i < 5; i++)
		//printf("s[%d]=%d\n", i, s[i]);         //s[%d]=%d\n
		printf("총합=%d", sum);
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
	int i;
	int scores[SIZE];

	for (i = 0; i < SIZE; i++)
		scores[i] = rand() % 100;

	for (i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5
int main()
{
	int scores[STUDENTS];
	int sum = 0;
	int i;
	float avg = 0;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	avg = sum / STUDENTS;
	printf("성적 평균=%.2f\n", avg);

	return 0;
}