// 다음 C언어 코드의 출력 결과를 쓰시오.
// 문자 분류 함수, 문자 변환

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char *p = "It is 8";
    char result[100];
    int i;
    for (i = 0; p[i] != '\0'; i++) {
        if (isupper(p[i]))
            result[i] = (p[i] - 'A' + 5) % 26 + 'A';
        else if (islower(p[i]))
            result[i] = (p[i] - 'a' + 10) % 26 + 'a';
        else if (isdigit(p[i]))
            result[i] = (p[i] - '0' + 3) % 10 + '0';
        else if (!(isupper(p[i]) || islower(p[i]) || isdigit(p[i])))
            result[i] = p[i];
    }
    result[i] = '\0';
    printf("%s\n", result);
    return 0;
}
