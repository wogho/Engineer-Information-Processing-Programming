// 다음 C언어 코드의 출력 결과를 쓰시오.
// static 지역변수, 반복 누적

#include <stdio.h>

int increase(void) {
    static int x = 0;
    x += 2;
    return x;
}

int main(void) {
    int x = 0;
    int sum = 0;
    int i = 0;
    for (i = 0; i < 4; i++) {
        x++;
        sum += increase();
    }

    printf("%d", sum);
    return 0;
}
