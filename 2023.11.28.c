// 17장 연결 리스트

/*// 간단한 연결 리스트 생성
#include <stdio.h>
#include <stdlib.h> 

struct NODE {
    int data;
    struct NODE* link;
};

typedef struct NODE NODE; 

int main() {
    NODE* p1;
    p1 = (NODE*)malloc(sizeof(NODE));

    p1->data = 10;
    p1->link = NULL;

    NODE* p2;
    p2 = (NODE*)malloc(sizeof(NODE));
    p2->data = 20;
    p2->link = NULL;

    p1->link = p2;

    printf("%d %d\n", p1->data, p1->link->data); 
    free(p1);
    free(p2);

    return 0;
}
*/

/*// book.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define S_SIZE 50

typedef struct NODE {
    char title[S_SIZE];
    int year;
    struct NODE* link;
    NODE *prev;
} NODE;

int main() {
    NODE* list = NULL;
    NODE* p,* next; // Added 'prev' to keep track of the previous node
    char buffer[S_SIZE];
    

    while (1) {
        printf("책의 제목을 입력하시오: (종료하려면 엔터)");
        fgets(buffer, S_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove the newline character

        if (buffer[0] == '\0')
            break;

        p = (NODE*)malloc(sizeof(NODE));
        strcpy(p->title, buffer);

        printf("책의 출판 연도를 입력하시오: ");
        fgets(buffer, S_SIZE, stdin);
        p->year = atoi(buffer);

        if (list == NULL) // 리스트가 비어 있으면 새로운 노드를 첫번째 노드로 만든다
            list = p;
        else // 리스트가 비어 있지 않으면
            prev->link = p; // 새로운 노드를 이전 노드의 끝에
        p->link = NULL; // 새로운 노드의 링크 필드를 NULL로 설정
        prev = p;
    }

    printf("\n");

    // 연결 리스트의 정보를 모두 출력
    p = list;
    while (p != NULL) {
        printf("책의 제목:%s 출판 연도:%d \n", p->title, p->year);
        p = p->link;
    }

    // 동적 할당 반납
    p = list;
    while (p != NULL) {
        next = p->link;
        free(p);
        p = next;
    }

    return 0;
}
*/

/*// movie.c
#include <stdio.h>
#include <stdlib.h>
typedef struct movie {
    char title[100]; //영화 제목
    double rating; //영화 평점
} MOVIE;
int main(void)
{
    MOVIE* movies;
    int size, i;
    printf("몇 편이나 저장하시겠습니까? ");
    scanf("%d", &size);
    movies = (MOVIE*)malloc(sizeof(MOVIE) *
        size);
    if (movies == NULL) {
        printf("동적 메모리 할당 오류");
        exit(1);
    }
    for (i = 0; i < size; i++) {//size편의 영화정보 입력
        printf("영화 제목 : ");
        fflush(stdin); //입력 버퍼 비우기
        gets(movies[i].title); //영화 제목에는 빈칸이 있을 수 있다.
            printf("영화 평점 : ");
        scanf("%lf", &(movies[i].rating));
    }
    printf("===================\n");
    printf("제목 \t 평점 \n");
    printf("===================\n");
    for (i = 0; i < size; i++)
        printf("%s \t %f \n", movies[i].title,
            movies[i].rating);
    printf("\n===================\n");
    free(movies);
    return 0;
}
*/

// 16장 전처리 및 다중소스 파일

// 예제
/*// power.h
#ifndef POWER_H
#define POWER_H
double power(int x, int y);
#endif

// main.c
#include <stdio.h>
#include "power.h" // Include "power.h" after the inclusion guard

int main() {
    int x, y;

    printf("x의 값을 입력하시오: ");
    scanf("%d", &x);
    printf("y의 값을 입력하시오: ");
    scanf("%d", &y);
    printf("%d의 %d 제곱값은 %f\n", x, y, power(x, y));
    return 0;
}

// power.c
#include "power.h"
double power(int x, int y) {
    double result = 1.0;
    int i;
    for (i = 0; i < y; i++)
        result *= x;
    return result;
}
*/

