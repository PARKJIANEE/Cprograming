/*
#include <stdio.h>
#define SIZE 5
void print_image(int image[][SIZE])
{
	int r, c;
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++)
			printf("%03d ", image[r][c]);
		printf("\n");
	}
	printf("\n");
}
void brighten_image(int image[][SIZE])
{
	int r, c;
	int* p;
	p = &image[0][0];
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++)
		{
			*p += 10;
			p++;
		}
	}
}
int main(void)
{
	int image[5][5] = {
	{ 10, 20, 30, 40, 50},
	{ 10, 20, 30, 40, 50},
	{ 10, 20, 30, 40, 50},
	{ 10, 20, 30, 40, 50},
	{ 10, 20, 30, 40, 50} };
	print_image(image);
	brighten_image(image);
	print_image(image);
	return 0;
}
*/

/*
#include <stdio.h>
// 0부터 99까지의 난수(실수 형태)를 발생하여 크기가 3인 배열 p에 저장한다.
void getSensorData(double* p)
{
	p[0] = rand() % 100;
	p[1] = rand() % 100;
	p[2] = rand() % 100;
	return;
}
int main(void)
{
	double sensorData[3];
	getSensorData(sensorData);
	printf("왼쪽 센서와 장애물과의 거리: %lf \n", sensorData[0]);
	printf("중간 센서와 장애물과의 거리: %lf \n", sensorData[1]);
	printf("오른쪽 센서와 장애물과의 거리: %lf \n", sensorData[2]);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int i;
	char str[4];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char str[] = "abc";
	printf("%s", str);

	//char str[] = "abc";
	//printf(str);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char str1[6] = "Seoul";
	char str2[3] = {'i','s','\0'};
	char str3[] = "the capital city of Korea.";
	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("원본 문자열=%s\n", src);
	for (i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	dst[i] = '\0';
	printf("복사된 문자열=%s\n", dst);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char str[30] = "C language is easy";
	int i = 0;

	while (str[i] != 0)
		i++;

	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("원본 문자열=%s\n", src);
	for (i = 0; src[i] !='\0'; i++)
		dst[i] = src[i];
	dst[i] ='\0';
	printf("복사된 문자열=%s\n", dst);
	while (src[i] != 0) //배열명 src로 수정
		i++;
	printf("문자열\"%s\"의 길이는 %d입니다.\n", src, i);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char* pmovies[20] = { "종이꽃","담보","극장판 요괴워치","프록시마 프로젝트" };
	for (i = 0; i < 4; i++);
		printf("%s\n", pmovies[i]);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
} // 종료할 때 ctrl+Z
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
	int ch;
	while ((ch = _getch()) != 'q')
		_putch(ch);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char name[100];
	char address[100];

	printf("이름을 입력하시오: ");

	gets_s(name, 100);
	printf("현재 거주하는 주소를 입력하시오: ");

	gets_s(address, 100);
	puts(name); //라인을 자동으로 바꿈
	puts(address);

	return 0;
}
*/

/*
#include<stdio.h>
#include <string.h>
#include <conio.h>
int main(void) {
	int c;
	while ((c = getchar()) != EOF)
	{
		if (islower(c))
			c = toupper(c);
		else
			c = tolower(c);
		putchar(c);
	}
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int length = strlen("Google&sungkyul");
	printf("단어의 길이=%d\n", length);

	return 0;
}
*/

