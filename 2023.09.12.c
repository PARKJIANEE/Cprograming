/*
#include <stdio.h>
int main()
{
	printf("%d", 'A'); //�ƽ�Ű�ڵ� 'A'�� 65
	printf("%d\n", 'a'); //�ƽ�Ű�ڵ� 'a'�� 97
}
*/

/*
#include <stdio.h>
#define SIZE 10

int main()
{
	int a = 7;
	int b = 10;
	int temp;
	
	temp = a;
	a = b;
	b = temp;

	printf("%d %d", a, b);

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 10

int main()
{
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
	int i, j, temp, least;

	for (i = 0; i < SIZE; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least])
				least = j;

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	printf("���ĵ� �迭\n");
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);

	printf("\n");

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 16
int binary_search(int list[], int n, int key);

int main()
{
	int key;
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };

	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf_s("%d", &key);
	printf("Ž�� ���=%d\n", binary_search(grade, SIZE, key));

	return 0;
}
int binary_search(int list[], int n, int key) {
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

int main()
{
	int s[ROWS][COLS];
	int i, j;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			s[i][j] = rand() % 100;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%02d ", s[i][j]);
		printf("\n");
	}
	return 0;
}
*/
