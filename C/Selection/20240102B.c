// 다음은 C언어 코드이다. 출력 결과를 쓰시오.
// 삼항 연산자, 비트 시프트, 조건문

#include <stdio.h>

int main(void) {
    int v1 = 0, v2 = 35, v3 = 29;
    if (v1 > v2 ? v2 : v1) {
        v2 = v2 << 2;
    } else {
        v3 = v3 << 2;
    }
    printf("%d", v2 + v3);
    return 0;
}
