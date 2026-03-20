// 16. 다음은 C언어의 문제이다. 아래 코드를 보고 알맞는 출력값을 작성하시오.
// 구조체 연결 리스트, 포인터 재연결

#include <stdio.h>
#include <stdlib.h>

struct node {
    int p;
    struct node *n;
};

int main(void) {
    struct node a = {1, NULL};
    struct node b = {2, NULL};
    struct node c = {3, NULL};

    a.n = &b;
    b.n = &c;
    c.n = NULL;
    c.n = &a;
    a.n = &b;
    b.n = NULL;

    struct node *head = &c;
    printf("%d %d %d", head->p, head->n->p, head->n->n->p);
    return 0;
}
