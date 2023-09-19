/*
int s[3][10] = {
		{0,1,2,3,4}, //---------1행
		{10,11,12,13,14}, //-------2행
		{20,21,22,23,24} //------3행
};
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 2
#define COLS 2	
int main()
{
	int s[ROWS][COLS];
	int i, j;
	int sum = 0;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			scanf("%d", &s[i][j]);
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%d ", s[i][j]);
		printf("\n");
	}
	for(i=0;i<ROWS;i++)
	{
		for (j = 0; j < COLS; j++)
			if (i == j)
			{
				sum += s[i][j];
				//printf("%02d", s[i][j]);
			//printf("\n");
			}
	}
	printf("%d", sum);

	return 0;
}
*/

/*
#include <stdio.h> 
#define ROWS 3
#define COLS 5
int main(void) {
	int i;
	int a[ROWS][COLS] = { { 87, 98, 80, 76, 3 },
	{ 99, 89, 90, 90, 0 },
	{ 65, 68, 50, 49, 0 }
	};
	for (i = 0; i < ROWS; i++)
	{
		double final_scores = a[i][0] * 0.3 + a[i][1] * 0.4 +
			a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];
		printf("학생 #%i의 최종 성적 = %10.2f\n", i + 1, final_scores);
	}
	return 0;
}
*/

/*
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
	int A[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}
	};
	int B[ROWS][COLS] = {
		{1,0,0},
		{1,0,0},
		{1,0,0}
	};
	int C[ROWS][COLS];

	int r, c;
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			C[r][c] = A[r][c] + B[r][c];

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			printf("%d", C[r][c]);
		printf("\n");
	}

	return 0;
}
*/

/*
#include <stdio.h>
#define YEARS 3
#define PRODUCTS 5
int sum(int grade[][PRODUCTS]);
int main(void)
{
	int sales[YEARS][PRODUCTS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int total_sale;
	total_sale = sum(sales);
	printf("총 매출은 %d입니다.\n", total_sale);
	return 0;
}
int sum(int grade[][PRODUCTS])
{
	int y, p;
	int total = 0;
	for (y = 0; y < YEARS; y++)
		for (p = 0; p < PRODUCTS; p++)
			total += grade[y][p];
	return total;
}
*/

/*
#include <stdio.h> 
void display(int image[8][16])
{
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++)
		{
			if (image[r][c] == 0)
				printf("*");
			else
				printf("_");
		}
		printf("\n");
	}
}
void inverse(int img[8][16])
{
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++) {
			if (img[r][c] == 0)
				img[r][c] = 1;
			else
				img[r][c] = 0;
		}
	}
}
int main(void)
{
	int image[8][16] = {
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1 },
	{ 1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1 },
	{ 1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 } };
	printf("변환전 이미지\n");
	display(image);
	inverse(image);
	printf("\n\n변환후 이미지\n");
	display(image);
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	char board[3][3];
	int x, y, k, i;
	for (x = 0; x < 3; x++) // 보드 초기화
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';
	// 사용자로부터 위치를 받아서 보드에 표시
	for (k = 0; k < 9; k++) {
		printf("(x, y) 좌표: ");
		scanf(" %d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'X' : 'O'; //순번에 따라 'X', 'O'중
		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf("%c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int A = 1004;
	printf("%x", &A); //주소를 지정할 때는  %x,%p 사용함.

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소는: %u\n", &i);
	printf("c의 주소는: %u\n", &c);
	printf("f의 주소는: %u\n", &f);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int A = 10;
	int* p;
	p = &A;

	printf("%u, %u\n", p, &A);
}
*/
