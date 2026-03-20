// 다음 C언어 코드의 출력 결과를 쓰시오.
// 조건/비트/논리 연산

#include <stdio.h>

int main(void) {
    int x = 7, y = 4, z;
    z = y % 3 < 3 ? 2 : 1;
    z = z & z >> 1;
    z = x > 5 && z <= 3 ? z * x : z / x;

    printf("%d", z);
    return 0;
}
