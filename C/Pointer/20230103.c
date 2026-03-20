// 3. 다음 C언어의 출력값을 작성하시오.
// 문자열 비교, 중첩 반복문

#include <stdio.h>

int main(void) {
    char *a = "qwer";
    char *b = "qwtety";

    for (int i = 0; a[i] != '\0'; i++) {
        for (int j = 0; b[j] != '\0'; j++) {
            if (a[i] == b[j]) printf("%c", a[i]);
        }
    }

    return 0;
}
