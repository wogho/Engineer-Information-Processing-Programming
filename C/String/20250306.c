// 6. 다음은 C코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 문자열 길이 탐색, 인덱스 접근

#include <stdio.h>

int main(void) {
    char str[] = "REPUBLICOFKOREA";
    int a = 0;

    while (str[a] != '\0')
        ++a;

    putchar(str[a - 2]);
    return 0;
}
