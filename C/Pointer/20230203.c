// 3. 다음은 C언어의 코드이다. 보기의 조건에 맞추어 알맞은 출력값을 작성하시오.
// 문자열 배열, 포인터 반환, 함수 호출
// 보기: 입력 순서 홍길동, 김철수, 박영희

#include <stdio.h>

char n[30];

char *test(void) {
    printf("입력하세요 : ");
    gets(n);
    return n;
}

int main(void) {
    char *test1;
    char *test2;
    char *test3;

    test1 = test();
    test2 = test();
    test3 = test();

    printf("%s\n", test1);
    printf("%s\n", test2);
    printf("%s", test3);

    return 0;
}
