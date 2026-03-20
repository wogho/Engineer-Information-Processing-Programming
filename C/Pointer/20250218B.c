// 다음 C언어 코드의 출력 결과를 쓰시오.
// 동적 할당 연결 리스트, 역순 구성

#include <stdio.h>
#include <stdlib.h>

struct node {
    char c;
    struct node *p;
};

struct node *func(char *s) {
    struct node *h = NULL, *n;

    while (*s) {
        n = (struct node *)malloc(sizeof(struct node));
        n->c = *s++;
        n->p = h;
        h = n;
    }

    return h;
}

int main(void) {
    struct node *n = func("BEST");

    while (n) {
        putchar(n->c);
        struct node *t = n;
        n = n->p;
        free(t);
    }

    return 0;
}
