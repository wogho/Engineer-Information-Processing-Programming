// 15. 다음은 C언어에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 문자열 복사, 반복문 인덱스 합

#include <stdio.h>
#include <string.h>

void sumFn(char *d, const char *s) {
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
    sumFn(str2, str1);

    for (int i = 0; str2[i] != '\0'; i++) {
        result += i;
    }
    printf("%d", result);

    return 0;
}
