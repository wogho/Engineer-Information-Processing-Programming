// 19. 다음은 C언어의 구조체에 대한 문제이다. 아래 코드를 확인하여 알맞은 출력 값을 작성하시오.
// 구조체 포인터, 연결 구조 접근

#include <stdio.h>

struct node {
    int n1;
    struct node *n2;
};

int main(void) {
    struct node a = {10, NULL};
    struct node b = {20, NULL};
    struct node c = {30, NULL};

    struct node *head = &a;
    a.n2 = &b;
    b.n2 = &c;

    printf("%d\n", head->n2->n1);

    return 0;
}
