// 13. 다음은 C언어 소스 코드이다. 출력 결과를 쓰시오.
// 함수 호출 흐름, 반환값 누적

#include <stdio.h>

int r1(void) {
    return 4;
}

int r10(void) {
    return 30 + r1();
}

int r100(void) {
    return 200 + r10();
}

int main(void) {
    printf("%d\n", r100());
    return 0;
}
