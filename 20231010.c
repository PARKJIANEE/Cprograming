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
// 0���� 99������ ����(�Ǽ� ����)�� �߻��Ͽ� ũ�Ⱑ 3�� �迭 p�� �����Ѵ�.
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
	printf("���� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[0]);
	printf("�߰� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[1]);
	printf("������ ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[2]);
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
	printf("���� ���ڿ�=%s\n", src);
	for (i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	dst[i] = '\0';
	printf("����� ���ڿ�=%s\n", dst);
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

	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);

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
	printf("���� ���ڿ�=%s\n", src);
	for (i = 0; src[i] !='\0'; i++)
		dst[i] = src[i];
	dst[i] ='\0';
	printf("����� ���ڿ�=%s\n", dst);
	while (src[i] != 0) //�迭�� src�� ����
		i++;
	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", src, i);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char* pmovies[20] = { "���̲�","�㺸","������ �䱫��ġ","���Ͻø� ������Ʈ" };
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
} // ������ �� ctrl+Z
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

	printf("�̸��� �Է��Ͻÿ�: ");

	gets_s(name, 100);
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");

	gets_s(address, 100);
	puts(name); //������ �ڵ����� �ٲ�
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
	printf("�ܾ��� ����=%d\n", length);

	return 0;
}
*/

