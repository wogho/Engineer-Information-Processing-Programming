// 다음 C 프로그램에 홍길동, 김철수, 박영희 순서로 입력하였다. 프로그램의 출력 결과를 쓰시오.
// 전역 문자열 버퍼, 포인터 반환
// 보기: 입력 순서 홍길동, 김철수, 박영희

#include <stdio.h>

char n[30];

char *read_name(void) {
    gets(n);
    return n;
}

int main(void) {
    char *p1 = read_name();
    char *p2 = read_name();
    char *p3 = read_name();
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);
    return 0;
}
