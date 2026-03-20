// 2. 다음 C언어의 출력값을 작성하시오.
// 문자열 배열, 포인터 참조, 문자 순회

#include <stdio.h>

int main(void) {
    char a[] = "Art";
    char *p = NULL;
    p = a;

    printf("%s\n", a);
    printf("%c\n", *p);
    printf("%c\n", *a);
    printf("%s\n", p);

    for (int i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);

    return 0;
}
