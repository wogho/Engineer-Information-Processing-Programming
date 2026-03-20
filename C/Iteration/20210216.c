// 16. 다음은 C언어에 관한 소스코드이다. 실행 결과값을 작성하시오.
// 반복문(for), 사용자 정의 함수

#include <stdio.h>

int mp(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res = res * base;
    }

    return res;
}

int main(void) {
    int res;
    res = mp(2, 10);
    printf("%d", res);
    return 0;
}
