/*// main_arg.c
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("명령어 라인에서 %d번째 문자열 = %s\n", i, argv[i]);

	return 0;
} 
*/

/*// mile2km.c
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	double mile, km;

	if (argc != 2)
	{
		printf("사용 방법: mile2km 거리\n");
		return 1;
	}
	mile = atof(argv[1]);
	km = 1.609 * mile;
	printf("입력된 거리는 %f km입니다.\n", km);

	return 0;
}
*/
// 14장 포인터 활용 -------------------------------------------------------------------

// 15장 스트림과 파일입출력 -----------------------------------------------------------

/*// file_open.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fclose(fp);

	return 0;
}
*/

/*// file_close.c
#include <stdio.h>
int main(void)
{
	FILE* fp = NULL;
	if (remove("sample.txt") == -1) // “dog.jpg”
		printf("파일을 삭제할 수 없습니다.!\n");
	else
		printf("파일을 삭제완료!\n");
	return 0;
}
*/

/*// 문자 단위 입출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	// fputc('a', fp);
	// fputc('b', fp);
	// fputc('c', fp);
	fputc("wow",fp);
	fclose(fp);

	return 0;
}
*/

/*// 문자 단위 입출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE *fp = NULL;
	int c;
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	while ((c = fgetc(fp)) != EOF);
	    putchar(c);
	
	fclose(fp);

	return 0;
}
*/

/*// fcopy1.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE*fp1, *fp2;
	char file1[100], file2[100];
	char buffer[100];

	printf("원본 파일 이름: ");
	scanf("%s", file1);
	printf("복사 파일 이름: ");
	scanf("%s", file2);

	// 첫 번째 파일을 읽기 모드로 열기
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.\n", file1);
		// exit(1);
	}

	// 두 번째 파일을 쓰기 모드로 열기
	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "복사 파일 %s을 열 수 없습니다.\n", file2);
		//exit(1);
	}

	// 첫 번째 파일을 두 번째 파일로 복사
	while (fgets(buffer, 100, fp1) != NULL)
		fputs(buffer, fp2);

	fclose(fp1);
	fclose(fp2);

	return 0;
}
*/

/*// search.c
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char fname[128];
	char buffer[256];
	char word[256];
	int line_num = 0;

	printf("입력 파일 이름을 입력하시오: ");
	scanf("%s", fname);

	printf("탐색할 단어를 입력하시오: ");
	scanf("%s", word);

	//파일 읽기 모드로 열기
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname);
		exit(1);
	}

	while (fgets(buffer, 256, fp))
	{
		line_num++;
		if (strstr(buffer, word))
		{
			printf("%s: %d 단어 %s이 발견되었습니다.\n", fname, line_num, word);
		}
	}
	fclose(fp);

	return 0;
}
*/

// score3.c
// #pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	printf("성적 파일 이름을 입력하시오: ");
	scanf("%s", fname);

	// 성적 파일을 쓰기 모드로 연다.
	if ((fp = fopen(fname, "w")) == NULL)
	{
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", fname);
		exit(1);
	}

	// 사용자로부터 학번, 이름, 성적을 입력받아서 파일에 저장한다.
	while (1)
	{
		printf("학번, 이름, 성적을 입력하시요: (음수이면 종료)");
		scanf("%d", &number);
		if (number < 0) break;
		scanf("%s %f", name, &score);
		fprintf(fp, " %d %s %.1f\n", number, name, score);
	}

	fclose(fp);

	if ((fp = fopen(fname, "a")) == NULL)
	{
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", fname);
		exit(1);
	}

	if (count > 0)
	{
		fprintf(fp, "====================\n");
		fprintf(fp, "평균 = %.2f\n", total / count);
	}

	fclose(fp);

	// 성적 파일을 읽기 모드로 연다.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", fname);
		exit(1);
	}
	// 파일에서 성적을 읽어서 평균을 구한다.
	while (!feof(fp))
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		total += score;
		count++;
	}
	printf("평균 = %.2f\n", total / count);
	
	fclose(fp);

	return 0;
}

