// 16. 다음 C언어 코드에서 알맞는 출력값을 작성하시오.
// 배열, 포인터 연산, 반복문 누적

#include <stdio.h>

int main(int argc, char *argv[]) {
    int a[4] = {0, 2, 4, 8};
    int b[3] = {0};
    int i = 1;
    int sum = 0;
    int *p1;

    for (; i < 4; i++) {
        p1 = a + i;
        b[i - 1] = *p1 - a[i - 1];
        sum = sum + b[i - 1] + a[i];
    }

    printf("%d", sum);
    return 0;
}
