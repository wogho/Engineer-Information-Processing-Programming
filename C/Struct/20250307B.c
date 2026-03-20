// 다음 C언어 코드의 출력 결과를 쓰시오.
// 구조체 연결, 누적 계산

#include <stdio.h>

struct Node {
    struct Node *next;
    unsigned int x;
};

int main(void) {
    struct Node t1 = {0, 5u};
    struct Node t2 = {0, 7u};
    struct Node t3 = {0, 11u};

    t3.next = &t2;
    t2.next = &t1;

    struct Node *curr = &t3;
    int sum = 0;

    while (curr) {
        sum = sum * 3 + curr->x;
        curr = curr->next;
    }

    sum = (sum ^ 42u) + 100u;

    printf("%u", sum);
    return 0;
}
