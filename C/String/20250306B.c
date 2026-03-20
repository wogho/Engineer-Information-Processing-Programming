// 다음 C언어 코드의 출력 결과를 쓰시오.
// 문자열 길이 탐색, 인덱스 출력

#include <stdio.h>

int main(void) {
    char str[] = "REPUBLICOFKOREA";
    int a = 0;
    while (str[a] != '\0') ++a;
    putchar(str[a - 2]);
    return 0;
}
