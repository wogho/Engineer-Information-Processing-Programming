// 다음 C언어 코드의 출력 결과를 쓰시오.
// 문자열 복사, 인덱스 누적 합

#include <stdio.h>

void fn(char *d, const char *s) {
    while (*s) {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
}

int main(void) {
    const char *str1 = "first";
    char str2[50] = "teststring";
    int result = 0;
    int i;

    fn(str2, str1);
    for (i = 0; str2[i] != '\0'; i++) {
        result += i;
    }
    printf("%d", result);
    return 0;
}
