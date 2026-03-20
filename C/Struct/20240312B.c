// 다음 C언어 코드의 출력 결과를 쓰시오.
// 구조체 연결 리스트, 인접 노드 값 교환

#include <stdio.h>

struct Node {
    int v;
    struct Node *next;
};

void func(struct Node *n) {
    while (n != NULL && n->next != NULL) {
        int t = n->v;
        n->v = n->next->v;
        n->next->v = t;
        n = n->next->next;
    }
}

int main(void) {
    struct Node n1 = {1, NULL};
    struct Node n2 = {2, NULL};
    struct Node n3 = {3, NULL};
    struct Node *c = &n1;

    n1.next = &n3;
    n3.next = &n2;
    func(&n1);
    while (c != NULL) {
        printf("%d", c->v);
        c = c->next;
    }
    return 0;
}
