//   �迭
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
			printf("a[]�� b[]�� ���� �ʽ��ϴ�.\n");
			return 0;
		}
	}
	printf("a[]�� b[]�� �����ϴ�.\n");
	return 0;
}
*/


//�ֻ��� ������
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
	printf("��    ��\n");
	printf("=======================\n");
	for (i = 0; i < SIZE; i++)
		printf("%3d    %3d\n", i, freq[i]);

	return 0;
}
*/

//�ڽǽ� : ���� �¼� �����
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
		printf("��ǻ�Ͱ��а� ������ 20230844\n");
		printf("�¼��� �����Ͻðڽ��ϱ�?(y�Ǵ�n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'y')
		{
			printf("----------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("----------------------\n");
			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");
			printf("�� ��° �¼��� �����Ͻðڽ��ϱ�");
			scanf("%d", &ans2);
		
		if (ans2 <= 0 || ans2 > SIZE) {
			printf("1���� 10������ ���ڸ� �Է��ϼ���.\n");
			continue;
		}
		if (seats[ans2 - 1] == 0) {
			seats[ans2 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�̹� ����� �ڸ��Դϴ�.\n");
	}
	else if (ans1 == 'n')
		return 0;
    }
return 0;
}
*/

//�ּҰ�, �ִ밪 ���ϱ�
/*
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main(void)
{
	int prices[SIZE] = { 0 };
	int i, maximum;
	printf("��ǻ�Ͱ��а� ������ 20230844\n");
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
		if (prices[i] > maximum) // < = �ּҰ�, > = �ִ밪 
			maximum = prices[i];
	}
	printf("�ִ밪�� %d�Դϴ�.\n", maximum);
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
	printf("����� %d�Դϴ�.\n", avg);
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