// 다음 C언어 코드의 출력 결과를 쓰시오.
// 문자열 뒤집기, 포인터 양끝 교환

#include <stdio.h>
#include <string.h>

void fn(char *str) {
    char t;
    int len = strlen(str);
    char *p1 = str;
    char *p2 = str + len - 1;
    while (p1 < p2) {
        t = *p1;
        *p1 = *p2;
        *p2 = t;
        p1++;
        p2--;
    }
}

int main(int argc, char *argv[]) {
    char str[100] = "ABCDEFGH";
    int len, i;

    fn(str);
    len = strlen(str);

    for (i = 1; i < len; i += 2) {
        printf("%c", str[i]);
    }
    return 0;
}
