// 13. 다음 코드에 대한 출력 값을 작성하시오.
// 반복문, 약수 합, 완전수 판별

#include <stdio.h>

int main(void) {
    int n;
    int k;
    int s;
    int el = 0;

    for (n = 6; n <= 30; n++) {
        s = 0;
        k = n / 2;
        for (int j = 1; j <= k; j++) {
            if (n % j == 0) {
                s = s + j;
            }
        }
        if (s == n) {
            el++;
        }
    }

    printf("%d", el);
    return 0;
}
