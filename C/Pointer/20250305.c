// 5. 다음은 C코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
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
