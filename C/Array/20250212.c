// 12. 다음은 C언어의 문제이다. 아래 코드를 보고 알맞는 출력값을 작성하시오.
// 원형 큐 배열 구현, enqueue/dequeue

#include <stdio.h>

#define SIZE 3

typedef struct {
    int a[SIZE];
    int front;
    int rear;
} Queue;

void enq(Queue *q, int val) {
    q->a[q->rear] = val;
    q->rear = (q->rear + 1) % SIZE;
}

int deq(Queue *q) {
    int val = q->a[q->front];
    q->front = (q->front + 1) % SIZE;
    return val;
}

int main(void) {
    Queue q = {{0}, 0, 0};

    enq(&q, 1);
    enq(&q, 2);
    deq(&q);
    enq(&q, 3);

    int first = deq(&q);
    int second = deq(&q);
    printf("%d 그리고 %d", first, second);

    return 0;
}
