// 12. 다음은 C언어 소스 코드이다. 출력 결과를 쓰시오.
// 1차원 배열, 버블 정렬

#include <stdio.h>

int main(void) {
    int i, j;
    int temp;
    int a[5] = {75, 95, 85, 100, 50};

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d", a[i]);
    }

    return 0;
}
