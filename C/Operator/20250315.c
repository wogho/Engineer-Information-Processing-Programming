// 15. 다음은 C코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 조건 연산자, 비트 연산, 논리 연산

#include <stdio.h>

int main(void) {
    int x = 7, y = 4, z;
    z = y % 3 < 3 ? 2 : 1;
    z = z & z >> 1;
    z = x > 5 && z <= 3 ? z * x : z / x;
    printf("%d", z);
    return 0;
}
