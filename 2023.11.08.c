/*//주소록 저장 코드
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include <stdio.h>
#include <string.h>

struct Directory
{
    char name[20];
    char nickname[20];
    char phone[20];
    char homeNumber[20];
};

int main()
{
    struct Directory d[SIZE]; 
    int directoryCount = 0;

    while (1) {
        struct Directory d;

        printf("휴대전화 번호를 입력하세요: ");
        scanf("%s", d.phone);

        if (strcmp(d.phone, "-1") == 0) {
            break;
        }

        printf("이름을 입력하세요: ");
        scanf("%s", d.name);
        printf("별명을 입력하세요: ");
        scanf("%s", d.nickname);
        printf("집 전화번호를 입력하세요: ");
        scanf("%s", d.homeNumber);

        directoryCount++;

        printf("\n");
    }
    printf("주소록: %d명 저장되었습니다.\n", directoryCount);
    return 0;
}
*/

/*//before
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

struct QUESTION {
    char question[SIZE];
    char item1[SIZE];
    char item2[SIZE];
    char item3[SIZE];
    char item4[SIZE];
    int solution;
};

int main(void) {
    struct QUESTION bank[100] = {
        {"임베디드 장치에 가장 적합한 프로그래밍 언어는?", "1. Python", "2. Java", "3. C", "4. Javascript", 3},
        {"서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3},
    };

    int numQuestions = 2; 
    int correctAnswers = 0; 
    int* selectedQuestions = (int*)malloc(numQuestions * sizeof(int));
    for (int i = 0; i < numQuestions; i++) {
        selectedQuestions[i] = 0; 
    }

    srand(time(0)); 

    for (int i = 0; i < numQuestions; i++) {
        int randomIndex;
        do {
            randomIndex = rand() % numQuestions; 
        } while (selectedQuestions[randomIndex] == 1); 

        printf("%s\n", bank[randomIndex].question);
        printf("%s    ", bank[randomIndex].item1);
        printf("%s    ", bank[randomIndex].item2);
        printf("%s    ", bank[randomIndex].item3);
        printf("%s    ", bank[randomIndex].item4);

        int select;
        scanf("%d", &select);

        if (select == bank[randomIndex].solution) {
            printf("맞았습니다.\n\n");
            correctAnswers++;
        }
        else {
            printf("틀렸습니다. 정답: %d\n\n", bank[randomIndex].solution);
        }

        selectedQuestions[randomIndex] = 1; 
    }

    printf("전체 문제 중에서 %d문제를 맞추었습니다.\n", correctAnswers);
    free(selectedQuestions); 

    return 0;
}
*/

/*//after
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

struct QUESTION {
    char question[SIZE];
    char item1[SIZE];
    char item2[SIZE];
    char item3[SIZE];
    char item4[SIZE];
    int solution;
};

int main(void) {
    struct QUESTION bank[10] = {
        {"임베디드 장치에 가장 적합한 프로그래밍 언어는?", "1. Python", "2. Java", "3. C", "4. Javascript", 3},
        {"서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3},
        {"다음 중 어떤 언어가 웹 프론트엔드 개발에 주로 사용됩니까?", "1. C++", "2. Ruby", "3. Python", "4. HTML/CSS/JavaScript", 4},
        {"C 언어의 데이터 타입 중 정수를 저장하는 타입은 무엇입니까?", "1. float", "2. char", "3. int", "4. double", 3},
        {"우리 태양계에서 가장 큰 행성은 무엇입니까?", "1. 지구", "2. 화성", "3. 목성", "4. 토성", 3},
        {"가장 많은 웹 서버 소프트웨어 중 하나는 무엇입니까?", "1. Nginx", "2. Apache", "3. Tomcat", "4. IIS", 2},
        {"컴퓨터 프로그래밍 언어 'Python'의 이름은 어떤 독자적인 주제와 관련이 있습니까?", "1. 뱀", "2. 독수리", "3. 말", "4. 고양이", 1},
        {"가장 가까운 별은 어떤 별입니까?", "1. 태양", "2. 달", "3. 폴라리스", "4. 프록시마 켄타우리", 4},
        {"어떤 프로그래밍 언어는 '휴먼 컴퓨터 상호 작용'의 약자로 알려져 있습니까?", "1. C", "2. COBOL", "3. HTML", "4. FORTRAN", 2},
        {"가장 많은 사용자를 가진 소셜 미디어 플랫폼은 무엇입니까?", "1. Instagram", "2. Twitter", "3. Facebook", "4. TikTok", 3},
    };

    int numQuestions = 10;
    int correctAnswers = 0;
    int* selectedQuestions = (int*)malloc(numQuestions * sizeof(int));
    for (int i = 0; i < numQuestions; i++) {
        selectedQuestions[i] = 0;
    }

    srand(time(0));

    for (int i = 0; i < numQuestions; i++) {
        int randomIndex;
        do {
            randomIndex = rand() % numQuestions;
        } while (selectedQuestions[randomIndex] == 1);

        printf("%s\n", bank[randomIndex].question);
        printf("%s    ", bank[randomIndex].item1);
        printf("%s    ", bank[randomIndex].item2);
        printf("%s    ", bank[randomIndex].item3);
        printf("%s    ", bank[randomIndex].item4);

        int select;
        scanf("%d", &select);

        if (select == bank[randomIndex].solution) {
            printf("맞았습니다.\n\n");
            correctAnswers++;
        }
        else {
            printf("틀렸습니다. 정답: %d\n\n", bank[randomIndex].solution);
        }

        selectedQuestions[randomIndex] = 1;
    }

    printf("전체 문제 중에서 %d문제를 맞추었습니다.\n", correctAnswers);
    free(selectedQuestions);

    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

struct QUESTION {
    char question[SIZE];
    char item1[SIZE];
    char item2[SIZE];
    char item3[SIZE];
    char item4[SIZE];
    int solution;
};

int main(void) {
    struct QUESTION bank[100] = {
        {"임베디드 장치에 가장 적합한 프로그래밍 언어는?", "1. Python", "2. Java", "3. C", "4. Javascript", 3},
        {"서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3},
    };

    int numQuestions = 2; 
    int correctAnswers = 0; 
    int* selectedQuestions = (int*)malloc(numQuestions * sizeof(int));
    for (int i = 0; i < numQuestions; i++) {
        selectedQuestions[i] = 0; 
    }

    srand(time(0)); 

    for (int i = 0; i < numQuestions; i++) {
        int randomIndex;
        do {
            randomIndex = rand() % numQuestions; 
        } while (selectedQuestions[randomIndex] == 1); 

        printf("%s\n", bank[randomIndex].question);
        printf("%s    ", bank[randomIndex].item1);
        printf("%s    ", bank[randomIndex].item2);
        printf("%s    ", bank[randomIndex].item3);
        printf("%s    ", bank[randomIndex].item4);

        int select;
        scanf("%d", &select);

        if (select == bank[randomIndex].solution) {
            printf("맞았습니다.\n\n");
            correctAnswers++;
        }
        else {
            printf("틀렸습니다. 정답: %d\n\n", bank[randomIndex].solution);
        }

        selectedQuestions[randomIndex] = 1; 
    }

    printf("전체 문제 중에서 %d문제를 맞추었습니다.\n", correctAnswers);
    free(selectedQuestions); 

    return 0;
}
*/

/*
#include <stdio.h>

// 책의 장르를 나타내는 열거형 정의
typedef enum {
    COMIC,
    SF,
    DOCU,
    DRAMA
} GENRE;

// 책 정보를 저장하는 구조체 정의
struct book {
    char title[100];
    char author[100];
    GENRE type;
};

int main() {
    // "바람과 함께 사라지다" 책의 정보를 구조체 변수에 저장
    struct book goneWithTheWind;
    strcpy(goneWithTheWind.title, "바람과 함께 사라지다");
    strcpy(goneWithTheWind.author, "마가렛 미첼");
    goneWithTheWind.type = DRAMA;

    // 구조체 변수의 정보를 출력
    printf("책 제목: %s\n", goneWithTheWind.title);
    printf("저자: %s\n", goneWithTheWind.author);

    // 장르를 문자열로 변환하여 출력
    switch (goneWithTheWind.type) {
    case COMIC:
        printf("장르: COMIC\n");
        break;
    case SF:
        printf("장르: SF\n");
        break;
    case DOCU:
        printf("장르: DOCU\n");
        break;
    case DRAMA:
        printf("장르: DRAMA\n");
        break;
    default:
        printf("알 수 없는 장르\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>

// 책의 장르를 나타내는 열거형 정의
typedef enum {
    COMIC,
    SF,
    DOCU,
    DRAMA
} GENRE;

// 책 정보를 저장하는 구조체 정의
struct book {
    char title[100];
    char author[100];
    GENRE type;
};

// 두 개의 책 정보를 비교하여 저자가 일치하는지 확인하는 함수
int equal_author(struct book b1, struct book b2) {
    return (strcmp(b1.author, b2.author) == 0);
}

int main() {
    // 두 개의 구조체 변수를 초기화
    struct book b1 = { "노인과 바다", "해밍웨이", DRAMA };
    struct book b2 = { "누구를 위하여 종을 울리나", "헤밍웨이", DRAMA };

    // equal_author 함수를 호출하여 두 책의 저자가 일치하는지 확인
    int result = equal_author(b1, b2);

    // 결과를 출력
    if (result) {
        printf("equal_author()의 반환값: 1 (저자가 일치)\n");
    }
    else {
        printf("equal_author()의 반환값: 0 (저자가 일치하지 않음)\n");
    }

    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_SONGS 100

struct Song {
    char title[100];
    char artist[100];
    char location[100];
    int genre;
};

struct Song musicDatabase[MAX_SONGS];
int songCount = 0;

void addSong() {
    if (songCount < MAX_SONGS) {
        struct Song newSong;
        printf("제목: ");
        scanf("%s", newSong.title);
        printf("가수: ");
        scanf("%s", newSong.artist);
        printf("위치: ");
        scanf("%s", newSong.location);
        printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): ");
        scanf("%d", &newSong.genre);

        musicDatabase[songCount] = newSong;
        songCount++;
        printf("곡이 추가되었습니다.\n");
    }
    else {
        printf("더 이상 음악을 추가할 수 없습니다. 데이터베이스가 가득 찼습니다.\n");
    }
}

void displaySongs() {
    if (songCount > 0) {
        printf("음악 목록:\n");
        for (int i = 0; i < songCount; i++) {
            printf("제목: %s\n", musicDatabase[i].title);
            printf("가수: %s\n", musicDatabase[i].artist);
            printf("위치: %s\n", musicDatabase[i].location);
            printf("장르: %d\n", musicDatabase[i].genre);
            printf("\n");
        }
    }
    else {
        printf("등록된 음악이 없습니다.\n");
    }
}

void searchSong() {
    char query[100];
    int found = 0;

    printf("검색할 곡의 제목을 입력하세요: ");
    scanf("%s", query);

    for (int i = 0; i < songCount; i++) {
        if (strcmp(query, musicDatabase[i].title) == 0) {
            printf("검색 결과:\n");
            printf("제목: %s\n", musicDatabase[i].title);
            printf("가수: %s\n", musicDatabase[i].artist);
            printf("위치: %s\n", musicDatabase[i].location);
            printf("장르: %d\n", musicDatabase[i].genre);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("검색 결과가 없습니다.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("====================\n");
        printf("1. 추가\n2. 출력\n3. 검색\n4. 종료\n");
        printf("====================\n");
        printf("정수값을 입력하시오: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addSong();
            break;
        case 2:
            displaySongs();
            break;
        case 3:
            searchSong();
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("올바른 옵션을 선택하세요.\n");
            break;
        }
    }

    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100

struct Book {
    int bookNumber;
    char title[100];
    char author[100];
    int isAvailable; 
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

void findBookByNumber(int bookNumber) {
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].bookNumber == bookNumber) {
            printf("도서 번호: %d\n", library[i].bookNumber);
            printf("제목: %s\n", library[i].title);
            printf("저자: %s\n", library[i].author);
            printf("대출 여부: %s\n", library[i].isAvailable ? "대출 가능" : "대출 중");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("도서를 찾을 수 없습니다.\n");
    }
}

void findBookByAuthor(char author[100]) {
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("도서 번호: %d\n", library[i].bookNumber);
            printf("제목: %s\n", library[i].title);
            printf("저자: %s\n", library[i].author);
            printf("대출 여부: %s\n", library[i].isAvailable ? "대출 가능" : "대출 중");
            found = 1;
        }
    }
    if (!found) {
        printf("도서를 찾을 수 없습니다.\n");
    }
}

void findBookByTitle(char title[100]) {
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("도서 번호: %d\n", library[i].bookNumber);
            printf("제목: %s\n", library[i].title);
            printf("저자: %s\n", library[i].author);
            printf("대출 여부: %s\n", library[i].isAvailable ? "대출 가능" : "대출 중");
            found = 1;
        }
    }
    if (!found) {
        printf("도서를 찾을 수 없습니다.\n");
    }
}

void addBook() {
    if (bookCount < MAX_BOOKS) {
        struct Book newBook;
        printf("도서 번호: ");
        scanf("%d", &newBook.bookNumber);
        printf("제목: ");
        scanf("%s", newBook.title);
        printf("저자: ");
        scanf("%s", newBook.author);
        newBook.isAvailable = 1;

        library[bookCount] = newBook;
        bookCount++;
        printf("도서가 추가되었습니다.\n");
    }
    else {
        printf("더 이상 도서를 추가할 수 없습니다. 도서관이 가득 찼습니다.\n");
    }
}

void displayLibrarySize() {
    printf("도서관이 소장한 도서의 수: %d\n", bookCount);
}

int main() {
    int choice;
    while (1) {
        printf("====================\n");
        printf("1. 도서 번호로 책 찾기\n");
        printf("2. 저자 이름으로 책 찾기\n");
        printf("3. 제목으로 책 찾기\n");
        printf("4. 새로운 책 추가\n");
        printf("5. 도서관이 소장한 도서의 수 표시\n");
        printf("====================\n");
        printf("메뉴 중 하나를 선택하시오: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            int bookNumber;
            printf("도서 번호를 입력하시오: ");
            scanf("%d", &bookNumber);
            findBookByNumber(bookNumber);
            break;
        case 2:
            char author[100];
            printf("저자 이름을 입력하시오: ");
            scanf("%s", author);
            findBookByAuthor(author);
            break;
        case 3:
            char title[100];
            printf("제목을 입력하시오: ");
            scanf("%s", title);
            findBookByTitle(title);
            break;
        case 4:
            addBook();
            break;
        case 5:
            displayLibrarySize();
            break;
        default:
            printf("올바른 옵션을 선택하세요.\n");
            break;
        }
    }

    return 0;
}
*/
