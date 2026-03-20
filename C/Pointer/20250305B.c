// 다음 C언어 코드의 출력 결과를 쓰시오.
// 구조체 포인터, 문자열 포인터 연산

#include <stdio.h>

struct Test {
    int i;
    const char *g;
};

int main(void) {
    struct Test test[] = {{1, "AB"}, {2, "DC"}, {3, "EB"}};
    struct Test *p = &test[1];
    printf("%s", p->g + (p->i - 1));
    return 0;
}
