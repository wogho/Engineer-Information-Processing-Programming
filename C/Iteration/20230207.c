// 7. 다음은 소스코드의 알맞은 출력을 작성하시오.
// 반복문, 배수 개수 카운트

#include <stdio.h>

int main(void) {
    int c = 0;

    for (int i = 1; i <= 2023; i++) {
        if (i % 4 == 0) c++;
    }

    printf("%d", c);
    return 0;
}
