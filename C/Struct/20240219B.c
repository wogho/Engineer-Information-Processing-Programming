// 다음 C언어 코드의 출력 결과를 쓰시오.
// 구조체 포인터 연결 접근

#include <stdio.h>

struct node {
    int n1;
    struct node *n2;
};

int main(void) {
    struct node *head = NULL;
    struct node a = {10, 0};
    struct node b = {20, 0};
    struct node c = {30, 0};
    head = &a;
    a.n2 = &b;
    b.n2 = &c;
    printf("%d", head->n2->n1);
    return 0;
}
