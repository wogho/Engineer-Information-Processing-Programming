// 18. 다음은 C언어 문제이다. 출력값을 작성하시오.
// 배열, 포인터 연산, 반복문 누적 합

#include <stdio.h>

int main(void) {
    int ary[3];
    int s = 0;
    *(ary + 0) = 1;
    ary[1] = *(ary + 0) + 2;
    ary[2] = *ary + 3;

    for (int i = 0; i < 3; i++) {
        s = s + ary[i];
    }

    printf("%d", s);
    return 0;
}
