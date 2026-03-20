// 2. 다음은 C언어 소스 코드이다. 출력 결과를 쓰시오.
// 반복문(while), 누적 연산

#include <stdio.h>

int main(void) {
    int i = 0, c = 0;
    while (i < 10) {
        i++;
        c *= i;
    }
    printf("%d", c);
    return 0;
}
