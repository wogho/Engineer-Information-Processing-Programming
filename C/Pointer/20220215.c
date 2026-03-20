// 15. 다음 C언어에서 출력에 대한 알맞은 답을 작성하시오.
// 문자열 포인터, 널 문자 기반 길이 계산

#include <stdio.h>

int len(char *p);

int main(void) {
    char *p1 = "2022";
    char *p2 = "202207";

    int a = len(p1);
    int b = len(p2);

    printf("%d", a + b);
    return 0;
}

int len(char *p) {
    int r = 0;
    while (*p != '\0') {
        p++;
        r++;
    }
    return r;
}
