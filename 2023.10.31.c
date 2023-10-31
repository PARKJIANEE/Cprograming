/*
#include <stdio.h>
struct point {
	int x;
	int y;
};

struct rect {
	struct point p1; // 직사각형의 한 모퉁이
	struct point p2; // 직사각형의 반대 모퉁이
};
// p1(x,y), p2(x,y)
int main()
{
	struct rect r;
	int w, h, area, peri; //  area = 면적 , peri = 둘레 

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h; // 면적
	peri = 2 * w + 2 * h; // 둘레
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main()
{
	struct point p1 = { 10,20 };
	struct point p2 = { 30,40 };

	p2 = p1;

	//if (p1 == p2) // 비교 -> 컴파일 오류
		//printf("p1와 p2이 같습니다.");

	if ((p1.x == p2.x) && (p1.y == p2.y)) //올바른 비교
		printf("p1와 p2이 같습니다.");

	return 0;
}
*/

/*
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[100]; // 구조체의 배열 선언 (100명 학생 까지) 

	list[2].number = 24; // 학번
	strcpy(list[2].name, "홍길동"); // 이름
	list[2].grade = 4.3; // 학점

	printf("힉반: %d, 이름: %s, 학점: %f\n", list[2].number, list[2].name, list[2].grade);

	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", &list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}
	for (i = 0; i < SIZE; i++)
		printf("학번: %d, 이름: %s,  학점: %f\n", list[i].number, list[i].name, list[i].grade);

	return 0;
}
*/

/*
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student s = { 20070001,"홍길동",4.3 };
	struct student *p;

	p = &s;

	printf("학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name, (*p).grade);
	printf("학번=%d 이름=%s 학점=%f \n", p->number, p->name, p->grade);

	return 0;
}
*/

/*
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[20];
	double grade;
	struct date *dob;
};

int main()
{
	struct date d = { 3, 20, 1980 };
	struct student s = { 20190001, "Kim", 4.3 };

	s.dob = &d;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}
*/

/*//첫번째 소스
#include <stdio.h>

struct student {
	int number;
	char naem[20];
	double grade;
};

int equal(struct student a, struct student b);

int main()
{
	struct student a = { 20190001,"hong",3.8 };
	struct student b = { 20190002,"kim",4.0 };

	if (equal(a, b) == 1)
		printf("같은 학생");
	else
		printf("다른 학생\n");

	return 0;
}
int equal(struct student s1, struct student s2)
{
	if (s1.number == s2.number)
		return 1;
	else
		return 0;
}
*/

/*//첫번째 소스랑 같은 코드
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int equal(struct student* s1, struct student* s2);

int main(void)
{
	struct student a = { 20190001,"hong",3.8 };
	struct student b = { 20190002, "kim",4.0 };

	if (equal(&a, &b) == 1)

	printf("같은 학생");

	else

	printf("다른 학생\n");

	return 0;
}

int equal(struct student* s1, struct student* s2)
{
    if (s1->number == s2->number)

         return 1;
    else
         return 0;
}
*/

/*
#include <stdio.h>

struct vector {
	float x;
	float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main()
{
	struct vector a = { 2.0,3.0 };
	struct vector b = { 5.0,6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("백터의 합은(%.2f,%.2f)입니다.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}
*/

/*//union2.c
#include <stdio.h>
union example { //공용체 선언
	int i;
	char c;
};

int main()
{
	union example v; //공용체 변수 선언

	v.c = 'A'; // char 형으로 참조
	printf("v.c: %c   v.i: %d\n", v.c, v.i);

	v.i = 10000; // int 형으로 참조
	printf("v.c: %c    v.i: %d\n", v.c, v.i);
}
*/

/*//union2.c
#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1 // 학번
#define REG_NUMBER 2 // 주민등록번호

struct student {
	int type;
	union {
		int stu_number; // 학번
		char reg_number[15]; // 주민등록번호
	}
	id;
	char name[20];
};

void print(struct student s)
{
	switch (s.type)
	{
	case STU_NUMBER:
		printf("학번: %d\n", s.id.stu_number);
		printf("이름: %s\n", s.name);
		break;
	case REG_NUMBER:
		printf("주민등록번호: %s\n", s.id.reg_number);
		printf("이름: %s\n", s.name);
		break;
	default:
		printf("타입오류\n");
		break;
	}
}

int main()
{
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 20190001;
	strcpy(s1.name, "홍길동");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "86101-1056076");
	strcpy(s2.name, "김철수");

	print(s1);
	print(s2);

	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	int number;
	char name[10];
	double grade;
};

int main()
{
	int studentCount = 0;
	printf("20230844 컴퓨터공학과 박지안\n\n");
	while (1) {

		struct student s;
		printf("학번을 입력하시오: ");
		scanf("%d", &s.number);

		if (s.number == -1) {
			break; 
		}

		printf("이름을 입력하시오: ");
		scanf("%s", s.name);

		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &s.grade);

		studentCount++;

		printf("\n");
		printf("학번: %d\n", s.number);
		printf("이름: %s\n", s.name);
		printf("학점: %f\n", s.grade);
}
	printf("학생 수: %d명 입니다.\n", studentCount);
	return 0;
}
*/

/*
#include <stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};
struct student list[] = {
	{ 20120001, "홍길동", 4.2 },
    { 20120002, "김철수", 3.2 },
    { 20120002, "김영희", 3.9 }
};
int main(void) {
	int i, size;
	struct student max_stu, min_stu;

	size = sizeof(list) / sizeof(list[0]);

	max_stu = list[0];
	min_stu = list[0];

	for (i = 0; i < size; i++) {
		if (list[i].grade > max_stu.grade)
			max_stu = list[i];

		if (list[i].grade < min_stu.grade)
			min_stu = list[i];
	}

	printf("20230844 컴퓨터공학과 박지안\n\n");
	printf("평점이 가장 높은 학생은 (이름 %s, 학번 %d, 평점 %.1f)입니다\n", max_stu.name, max_stu.number, max_stu.grade);
	printf("평점이 가장 낮은 학생은 (이름 %s, 학번 %d, 평점 %.1f)입니다\n", min_stu.name, min_stu.number, min_stu.grade);

	return 0;
}
*/
