// 다음 C언어 코드의 출력 결과를 쓰시오.
// 문자열 배열, 포인터 참조, 문자 순회

#include <stdio.h>

int main(void) {
    char a[] = "Art";
    char *p = NULL;
    int i = 0;

    p = a;
    printf("%s\n", a);
    printf("%c\n", *p);
    printf("%c\n", *a);
    printf("%s\n", p);

    for (i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);
    return 0;
}
