// 7. 다음은 C언어에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// static 지역변수, 반복문 누적

#include <stdio.h>

int func(void) {
    static int x = 0;
    x += 2;
    return x;
}

int main(void) {
    int x = 1;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        x++;
        sum += func();
    }
    printf("%d", sum);

    return 0;
}
