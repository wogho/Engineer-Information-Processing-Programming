// 12. 다음은 C언어에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 구조체 연결 리스트, 노드 값 교환

#include <stdio.h>

struct Node {
    int value;
    struct Node *next;
};

void func(struct Node *node) {
    while (node != NULL && node->next != NULL) {
        int t = node->value;
        node->value = node->next->value;
        node->next->value = t;
        node = node->next->next;
    }
}

int main(void) {
    struct Node n1 = {1, NULL};
    struct Node n2 = {2, NULL};
    struct Node n3 = {3, NULL};

    n1.next = &n3;
    n3.next = &n2;

    func(&n1);

    struct Node *current = &n1;

    while (current != NULL) {
        printf("%d", current->value);
        current = current->next;
    }

    return 0;
}
