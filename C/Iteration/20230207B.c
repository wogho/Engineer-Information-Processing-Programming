// 다음은 C 언어 코드이다. 출력 결과를 쓰시오.
// 반복문, 배수 카운트

#include <stdio.h>

int main(void) {
    int c = 0;
    int i;

    for (i = 1; i <= 2023; i++) {
        if (i % 4 == 0) c++;
    }
    printf("%d", c);
    return 0;
}
