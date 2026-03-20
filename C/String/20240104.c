// 4. 다음은 C언어에 대한 문제이다. 알맞는 출력 값을 작성하시오.
// 문자열 뒤집기, 포인터 양끝 교환

#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    char temp;
    char *p1 = str;
    char *p2 = str + len - 1;
    while (p1 < p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}

int main(int argc, char *argv[]) {
    char str[100] = "ABCDEFGH";

    reverse(str);

    int len = strlen(str);

    for (int i = 1; i < len; i += 2) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
