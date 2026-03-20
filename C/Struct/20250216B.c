// 문제 알 수 없음(C 코드) 출력 결과를 쓰시오.
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

    a.n = &b; b.n = &c; c.n = NULL;
    c.n = &a; a.n = &b; b.n = NULL;
    struct node *head = &c;
    printf("%d %d %d", head->p, head->n->p, head->n->n->p);
    return 0;
}
