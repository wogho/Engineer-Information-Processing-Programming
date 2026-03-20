// 7. 다음은 C코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 구조체 연결, 반복 누적 계산

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

    printf("%u\n", sum);
    return 0;
}
