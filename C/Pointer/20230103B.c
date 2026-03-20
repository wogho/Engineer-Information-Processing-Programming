// 다음 C언어 코드의 출력 결과를 쓰시오.
// 문자열 비교, 중첩 반복문

#include <stdio.h>

int main(void) {
    char *a = "qwer";
    char *b = "qwety";
    int i, j;

    for (i = 0; a[i] != '\0'; i++) {
        for (j = 0; b[j] != '\0'; j++) {
            if (a[i] == b[j])
                printf("%c", a[i]);
        }
    }
    return 0;
}
