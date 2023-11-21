/*// 이진 파일 쓰기
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
int main()
{
	int buffer[SIZE] = { 10,20,30,40,50 };
	FILE *fp = NULL;

	fp = fopen("binary.bin", "wb");
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		return 1;
	}
	fwrite(buffer, sizeof(int), SIZE, fp);

	fclose(fp);
	
	return 0;
}
*/

/*// 이진 파일 읽기
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
int main()
{
	int buffer[SIZE];
	FILE *fp = NULL;

	fp = fopen("binary.bin", "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		return 1;
	}
	fread(buffer, sizeof(int), SIZE, fp);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", buffer[i]);

	fclose(fp);

	return 0;
}
*/

/*// binary_file.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3
struct student {
	int number; // 학번
	char name[20];
	double gpa; // 평점
};
int main(void) {
	struct student table[SIZE] = {
	{ 1, "Kim", 3.99 },
	{ 2, "Min", 2.68 },
	{ 3, "Lee", 4.01 }
	};
	struct student s;
	FILE *fp = NULL;
	int i;
	// 이진 파일을 쓰기 모드로 연다.
	if ((fp = fopen("student.dat", "wb")) == NULL)
	{
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}
	fwrite(table, sizeof(struct student), SIZE, fp);
	fclose(fp);
	if ((fp = fopen("student.dat", "rb")) == NULL) //이진파일 읽기모드로 열기
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}
	for (i = 0; i < SIZE; i++) {
		fread(&s, sizeof(struct student), 1, fp);
		printf("학번 = %d, 이름 = %s, 평점 = %f\n", s.number, s.name, s.gpa);
	}
	fclose(fp);
	return 0;
}
*/

/*// Image_copy.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE *src_file, *dst_file;
	char filename[100];
	char buffer[1024];
	int r_count, w_count;

	printf("이미지 파일 이름: ");
	scanf("%s", filename);

	src_file = fopen(filename, "rb");
	dst_file = fopen("copy.jpg", "wb");
	if (src_file == NULL || dst_file == NULL) {
		fprintf(stderr, "파일 열기 오류 \n");
		return 1;
		
while ((r_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0) {
	w_count = fwrite(buffer, 1, r_count, dst_file);
	if (w_count < 0) {
		fprintf(stderr, "파일 쓰기 오류 \n");
		return 1;
}
if (w_count < r_count) {
		fprintf(stderr, "미디어 쓰기 오류 \n");
		return 1;
	}
}
printf("copy.jpg로 이미지 파일이 복사됨 \n");
fclose(src_file);
fclose(dst_file);

return 0;
	}

}
*/

/*// fseek.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp;
	char buffer[100];

	fp = fopen("sample.txt", "wt");
	fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
	fclose(fp);
	
	fp = fopen("sample.txt", "rt");
	
	fseek(fp, 3, SEEK_SET);
	printf("fseek(fp, 3, SEEK_SET) = %c \n", fgetc(fp));
	
	fseek(fp, -1, SEEK_END);
	printf("fseek(fp, -1, SEEK_END) = %c \n", fgetc(fp));
	
	fclose(fp);
	return 0;
}
*/

/*// 예제
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#define SIZE 100
typedef struct person { // 연락처를 구조체로 표현
	char name[SIZE]; // 이름
	char address[SIZE]; // 주소
	char mobilephone[SIZE]; // 휴대폰
	char desc[SIZE]; // 특징
} PERSON;
void menu();
PERSON get_record();
void print_record(PERSON data);
void add_record(FILE* fp);
void search_record(FILE* fp);
void update_record(FILE* fp);

int main(void)
{
	FILE* fp;
	int select;
	// 이진 파일을 추가 모드로 오픈한다.
	if ((fp = fopen("address.dat", "a+")) == NULL) {
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다");
		exit(1);
	}
	while (1) {
		menu(); //메뉴 표시
		printf("정수값을 입력하시오: ");
		scanf("%d", &select);
		switch (select) {
		case 1: add_record(fp); break; //데이터 추가
		case 2: update_record(fp); break; //데이터 수정
		case 3: search_record(fp); break; //데이터 탐색
		case 4: return 0;
		}
	}
	fclose(fp);
	return 0;
}

// 사용자로부터 데이터를 받아서 구조체로 반환한다
PERSON get_record()
{
	PERSON data;
	getchar(); //줄바꿈 문자 없애기
	printf("이름 "); gets(data.name);
	printf("주소 "); gets(data.address);
	printf("휴대폰 "); gets(data.mobilephone);
	printf("특징 "); gets(data.desc);
	return data;
}
// 구조체 데이터를 화면에 출력한다.
void print_record(PERSON data)
{
	printf("이름 : %s\n", data.name);
	printf("주소 : %s\n", data.address);
	printf("휴대폰 : %s\n", data.mobilephone);
	printf("특징 : %s\n", data.desc);
}

// 메뉴를 화면에 표시하는 함수
void menu()
{
	printf("====================\n");
	printf(" 1. 추가\n 2. 수정\n 3. 검색\n 4. 종료\n");
	printf("====================\n");
}
// 데이터를 추가한다
void add_record(FILE* fp)
{
	PERSON data;
	data = get_record(); //사용자로부터 데이터를 받아서 구조체에 저장
	fseek(fp, 0, SEEK_END); //파일의 끝으로 간다
	fwrite(&data, sizeof(data), 1, fp); //구조체 데이터를 파일에 쓴다
}

// 데이터를 탐색한다
void search_record(FILE* fp)
{
	char name[SIZE];
	PERSON data;
	fseek(fp, 0, SEEK_SET); //파일의 처음으로 간다
	getchar(); //줄바꿈 문자 없애기 fflush(stdin);
	printf("탐색하고자 하는 사람의 이름");
	gets(name);
	while (!feof(fp)) // 파일의 끝까지 반복한다
	{
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.name, name) == 0) { //이름 비교
			print_record(data);
			break;
		}
	}
}
// 데이터를 수정한다
void update_record(FILE* fp)
{
	char name[SIZE];
	PERSON data;
	long record_pos; 

	fseek(fp, 0, SEEK_SET); 
	getchar(); 
	printf("수정하고자 하는 사람의 이름: ");
	gets(name);

	while (!feof(fp))
	{
		record_pos = ftell(fp); 

		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.name, name) == 0)
		{
			print_record(data);

			fseek(fp, record_pos, SEEK_SET);

			printf("새로운 데이터를 입력하세요:\n");
			PERSON updated_data = get_record();

			fwrite(&updated_data, sizeof(updated_data), 1, fp);

			printf("데이터가 성공적으로 수정되었습니다.\n");
			break;
		}
	}
}
*/

/*//malloc1.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
int main(void)
{
	int* list;
	list = (int*)malloc(3 * sizeof(int)); //동적 메모리 할당
	if (list == NULL) { //반환값이 NULL인지 검사
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	list[0] = 10; //이 부분을 포인터 스타일로 수정해서 실행해보기
	list[1] = 20;
	list[2] = 30;
	//1.출력하기 2. pointer 형식으로 출력하기
	free(list); //동적 메모리 해제
	return 0;
}
*/

/*// malloc2.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *list;
	int i, students;

	printf("학생의 수 : ");
	scanf("%d", &students);
	list = (int*)malloc(students * sizeof(int));
	if (list == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	for (i = 0; i < students; i++) {
		printf("학생 #%d 성적: ", i + 1);
		scanf("%d", &list[i]);
	}
	printf("========================\n");
	for (i = 0; i < students; i++)
		printf("학생 #%d 성적: %d\n", i + 1, list[i]);
	printf("=========================\n");
	free(list);

	return 0;
}
*/
